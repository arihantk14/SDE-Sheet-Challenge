#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size(), m = matrix[0].size();
	vector<int> row, col;

	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(matrix[i][j]==0){
				row.push_back(i);
				col.push_back(j);
			}
		}
	}	

	for(int i = 0;i<row.size();i++){
		int r = row[i], c = col[i];
		//changing the row
		for(int j = 0;j<m;j++){
			matrix[r][j] = 0;
		}

		//changing the col
		for(int j = 0;j<n;j++){
			matrix[j][c] = 0;
		}
	}
}
