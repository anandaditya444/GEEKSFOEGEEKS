Node * inOrderSuccessor(Node *root, Node *x)
{
    Node* cur = NULL;
    if(x->right != NULL)
    {
        cur = x;
        while(cur->left != NULL)
            cur = cur->left;
        return cur;
    }
    else
    {
        Node* succ = NULL;
        while(root != NULL)
        {
            if(cur->data > root->data)
            {
                root = root->right;
            }
            else if(cur->data < root->data)
            {
                succ = root;
                root = root->left;
            }
            else
                break;
        }
        // if(succ == NULL)
        //       succ->data = -1;
        return succ;
    }
   return NULL;
}