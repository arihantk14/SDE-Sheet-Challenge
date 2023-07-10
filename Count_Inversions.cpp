#include <bits/stdc++.h> 
long long merge(long long *arr, int low, int mid, int high){
    int i = low, j = mid + 1;
    vector<long long> temp(high-low + 1);
    int k = 0;
    long long count = 0;
    while(i<=mid && j<=high){
        if(arr[i]>arr[j]){
            count+=mid-i+1;
            temp[k] = arr[j];
            j++;   
        }
        else{
            temp[k] = arr[i];
            i++;
        }
        k++;
    }
    while(i<=mid){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=high){
        temp[k] = arr[j];
        j++;
        k++;
    }
    k = low;
    for(auto it: temp){
        arr[k] = it;
        k++;
    }
    return count;
}
long long mergeSort(long long *arr, int low, int high){
    long long cnt = 0;
    if(low>=high) return cnt;
    int mid = low + (high-low)/2;
    cnt += mergeSort(arr,low,mid);
    cnt += mergeSort(arr,mid+1,high);
    cnt += merge(arr,low,mid,high);
    return cnt;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergeSort(arr,0,n-1);
}
