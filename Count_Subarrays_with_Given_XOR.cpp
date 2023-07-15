#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int cnt = 0;
    int n = arr.size();
    for(int i = 0;i<n;i++){
        int xr = arr[i];
        if(xr==x) cnt++;
        for(int j = i+1;j<n;j++){
            xr = xr^arr[j];
            if(xr==x) cnt++;
        }
    }
    return cnt;
}
