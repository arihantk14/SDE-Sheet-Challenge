#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<int> dp(n,0);
	for(int i = 0;i<m;i++){
		vector<int> temp(n,0);
		for(int j = 0;j<n;j++){
			if(i==0 and j==0) temp[j] = 1;
			else{
				int up = 0, left = 0;
				if(i-1>=0) up = dp[j];
				if(j-1>=0) left = temp[j-1];
				temp[j] = up + left;
			}
		}
		dp = temp;
	}
	return dp[n-1];
}
