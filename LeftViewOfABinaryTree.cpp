
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// A wrapper over leftViewUtil()
void leftView(Node *root)
{
   if(root == NULL)
    return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int cnt = 0;
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            cnt = 0;
            if(!q.empty())
                q.push(NULL);
        }
        else
        {
            cnt++;
            if(cnt == 1)
                cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        
    }
}