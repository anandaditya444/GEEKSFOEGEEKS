int countNonLeafNodes(Node* root)
{
    if(root == NULL)
        return 0;
    if(root->left || root->right)
        return 1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right);
}