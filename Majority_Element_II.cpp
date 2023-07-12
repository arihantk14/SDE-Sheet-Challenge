#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int cnt1 = 0, cnt2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        if(cnt1==0 and el2!=arr[i]){
            cnt1 = 1;
            el1 = arr[i];
        }
        else if(cnt2==0 and el1!=arr[i]){
            cnt2 = 1;
            el2 = arr[i];
        }
        else if(arr[i]==el1) cnt1++;
        else if(arr[i]==el2) cnt2++;
        else{
            cnt1--, cnt2--;
        }
    }

    cnt1 = 0, cnt2 = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]==el1) cnt1++;
        if(arr[i]==el2) cnt2++;
    }
    int mini = (int)(arr.size()/3) + 1;
    vector<int> ans;
    if(cnt1>=mini) ans.push_back(el1);
    if(cnt2>=mini) ans.push_back(el2);
    return ans;
}
