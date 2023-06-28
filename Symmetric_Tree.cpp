/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/

bool check(BinaryTreeNode<int>* r1, BinaryTreeNode<int>*r2){
    if(r1==NULL || r2==NULL){
        return r1==r2;
    }
    if(r1->data!=r2->data) return false;
    return check(r1->left,r2->right) && check(r1->right, r2->left);
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.   
    if(root==NULL || (root->left==NULL and root->right==NULL)) return true; 
    return check(root->left, root->right);
}
