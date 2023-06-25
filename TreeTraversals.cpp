#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/

void inorder(BinaryTreeNode<int>* root, vector<int>&in){
    if(root==NULL) return;
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
void preorder(BinaryTreeNode<int>*root, vector<int>&pre){
    if(root==NULL) return;
    pre.push_back(root->data);
    preorder(root->left,pre);
    preorder(root->right,pre);
}
void postorder(BinaryTreeNode<int>*root, vector<int>&post){
    if(root==NULL) return;
    postorder(root->left,post);
    postorder(root->right,post);
    post.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> inor,preo,postor;
    inorder(root,inor);
    preorder(root,preo);
    postorder(root,postor);
    ans.push_back(inor);    
    ans.push_back(preo);
    ans.push_back(postor);

    return ans;
}
