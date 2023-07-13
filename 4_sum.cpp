#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    if(n<4) return "No";
    for(int i = 0;i<n-3;i++){
        for(int j = i + 1;j<n-2;j++){
            int low = j + 1, high = n-1;
            while(low<high){
                int sum = arr[low] + arr[high] + arr[i] + arr[j];
                if(sum==target) return "Yes";
                else if(sum<target) low++;
                else high--;
            }
        }
    }
    return "No";
}
