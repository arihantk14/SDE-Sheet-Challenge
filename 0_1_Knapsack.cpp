#include <bits/stdc++.h> 
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<int> dp(maxWeight+1,0);
	for(int i = weight[0];i<maxWeight+1;i++){
		 dp[i] = value[0];
	}

	for(int i = 1;i<n;i++){
        for (int j = maxWeight; j >=0; j--) {
			int notTake = 0 + dp[j];
			int take = INT_MIN;
			if(j>=weight[i]) take = value[i] + dp[j-weight[i]];
			dp[j] = max(take,notTake);
       }
    }
	return dp[maxWeight];
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	return knapsack(weights,values,n,w);
}
