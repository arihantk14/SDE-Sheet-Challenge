#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    for(int i =0;i<arr.size();i++){
        if(ans.empty() || arr[i][0]>ans.back()[1]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1] = max(arr[i][1],ans.back()[1]);
        }
    }
    return ans;
}
