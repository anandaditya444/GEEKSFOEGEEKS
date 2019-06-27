/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    int lCount;
 
    Node* left;
    Node* right;
};*/
#include<vector>
vector<int>v;

void inorder(Node* root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    v.push_back(root->data);
    inorder(root->right);
}
int KthSmallestElement(Node *root, int k)
{
    v.clear();
    inorder(root);
    return v[k-1];
}