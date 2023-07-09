#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int max_so_far = 0;
    int profit = 0;
    for(int i = prices.size()-1;i>=0;i--){
        if(prices[i]<=max_so_far){
            profit = max(profit, max_so_far - prices[i]);
        }
        max_so_far = max(max_so_far,prices[i]);
    }
    return profit;
}
