#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n1)
{
	// Write your code here 
	long long n = n1;
	int xr = 0;
	for(int i = 0;i<n;i++){
		xr = xr^arr[i];
		xr = xr^(i+1);
	}

	int bitNo = 0;
	while(1){
		if((xr & (1<<bitNo))!=0){
			break;
		}
		bitNo++;
	}

	int zero = 0, one = 0;
	for(int i = 0;i<n;i++){
		if((arr[i] & (1<<bitNo))!=0){
			one = one ^ arr[i];
		}
		else{
			zero = zero ^ arr[i];
		}

		if(((i+1) &(1<<bitNo))!=0){
			one = one ^ (i+1);
		}
		else{
			zero = zero ^ (i+1);
		}
	}
	
	int cnt = 0;
	for(int i = 0;i<n;i++){
		if(zero==arr[i]) cnt++;
	}
	if(cnt==2) return {one,zero};
	return {zero,one};
}
