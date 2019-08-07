/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
int isSumProperty(Node *node)
{
    if(node == NULL)
        return 1;
    if(node->left == NULL && node->right == NULL)
        return 1;
    int ldata = 0,rdata = 0;
    if(node->left != NULL)
        ldata = node->left->data;
    if(node->right != NULL)
        rdata = node->right->data;
    return ((ldata + rdata) == node->data) && isSumProperty(node->left) && isSumProperty(node->right);
    
}