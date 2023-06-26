#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
    //  Write your code here.
    int peak = 0;
    if(arr[n-1]>arr[n-2]) peak = n-1;
    else{
        for(int i = n-2;i>=0;i--){
            if(arr[i]>arr[i+1] and arr[i]>arr[i-1]){
                peak = i;
                break;
            }
        }    
    }
    if(peak==0){
        reverse(arr.begin(),arr.end());
    }
    else{
        if(peak==n-1){
            swap(arr[n-1],arr[n-2]);
        }
        else{
            if(arr[peak-1]<arr[n-1]){
                swap(arr[peak-1],arr[n-1]);
                sort(arr.begin()+peak,arr.end());
            }
            else{
                swap(arr[peak-1],arr[peak]);
                sort(arr.begin()+peak,arr.end());
            }
        }
    }
    return arr;
}
