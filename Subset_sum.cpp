void solve(int i, vector<int>&num, int sum, vector<int>&vec){
	if(i==num.size()){
		vec.push_back(sum);
		return;
	}
	//not_take 
	solve(i+1,num,sum,vec);
	//take 
	solve(i+1,num,sum+num[i],vec);
}
vector<int> subsetSum(vector<int> &num){
	// Write your code here.	
	vector<int> vec;
	int sum = 0;
	solve(0,num,sum,vec);
	sort(vec.begin(),vec.end());
	return vec;
}
