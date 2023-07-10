#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int left = 0, right = m-1, top = 0, bottom = n - 1;
    while(left<right && top<bottom){
        int temp = mat[top][left];
        for(int col = left + 1;col<=right;col++){
            int x = mat[top][col];
            mat[top][col] = temp;
            temp = x;
        }
        top++;

        for(int row = top;row<=bottom;row++){
            int x = mat[row][right];
            mat[row][right] = temp;
            temp = x;
        }
        right--;

        for(int col = right;col>=left;col--){
            int x = mat[bottom][col];
            mat[bottom][col] = temp;
            temp = x;
        }
        bottom--;

        for(int row = bottom;row>=top;row--){
            int x = mat[row][left];
            mat[row][left] = temp;
            temp = x;
        }
        left++;

        mat[top-1][left-1] = temp;
    }

}
