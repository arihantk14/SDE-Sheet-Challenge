#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    
    unordered_set<int> st;
    for(auto it: arr){
        st.insert(it);
    }
    int ans = 0;
    for(auto it: arr){
        if(st.find(it-1)==st.end()){
            int curr = 1;
            int num = it;
            while(st.find(num+1)!=st.end()){
                num++;
                curr++;
            }

            ans = max(curr,ans);
        }
    }
    return ans;
}
