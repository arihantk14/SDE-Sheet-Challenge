#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> ans;
    if(!root) return ans;
    queue<TreeNode<int>*> q;
    q.push(root);   
    int k = 0;
    while(!q.empty()){
        int sz = q.size();
        for(int i = 0;i<sz;i++){
            TreeNode<int>* node = q.front();
            q.pop();
            if(k==0) {
                ans.push_back(node->data);
                 k = 1;
            }
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        k = 0;
    }
    return ans;
}
