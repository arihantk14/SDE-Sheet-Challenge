#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   unordered_map<int,int> mp;
   vector<vector<int>> ans;
   for(int i = 0;i<arr.size();i++){
      int x = arr[i];
      if(mp.find(s-x)!=mp.end()){
         vector<int> v = {min(x,s-x),max(x,s-x)};
         int fr = mp[s-x];
         while(fr){
            ans.push_back(v);
            fr--;
         }
      }
      mp[x]++;
   }
   sort(ans.begin(),ans.end());
   return ans;
}
