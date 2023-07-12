#include <bits/stdc++.h> 
int merge(vector<int>&arr, int low, int mid, int high){
    int i = low, j = mid + 1;
    vector<int> temp(high-low + 1);
    int k = 0;
    int count = 0;
	
	while(i<=mid && j<=high){
		if(arr[i]>2*arr[j]){
			count += mid - i + 1;
			j++;
		}
		else i++;
	}
	i = low, j = mid + 1;
    while(i<=mid && j<=high){
        if(arr[i]>arr[j]){
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

int mergeSort(vector<int>&arr, int low, int high){
    int cnt = 0;
    if(low>=high) return cnt;
    int mid = low + (high-low)/2;
    cnt += mergeSort(arr,low,mid);
    cnt += mergeSort(arr,mid+1,high);
    cnt += merge(arr,low,mid,high);
    return cnt;
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
	return mergeSort(arr,0,n-1);
}
