/*This is a function problem.You only need to complete the function given below*/
/*  Structure of a Binary Tree 
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
/* Function to get the maximum width of a binary tree*/
int getMaxWidth(Node* root)
{
   if(root == NULL)
        return 0;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int cnt = 0,ans = 0;
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            ans = max(ans,cnt);
            cnt = 0;
            if(!q.empty())
                q.push(NULL);
        }
        else
        {
            cnt++;
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    return ans;
}
