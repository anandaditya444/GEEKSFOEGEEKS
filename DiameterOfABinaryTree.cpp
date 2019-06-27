int height(Node* node)
{
    if(node == NULL)
        return 0;
    int ls = height(node->left);
    int rs = height(node->right);
    
    return max(ls,rs)+1;
}

int diameter(Node* node)
{
   if(node == NULL)
    return 0;
   int left = height(node->left);
   int right = height(node->right);
   int op1 = left+right+1;
   int op2 = diameter(node->left);
   int op3 = diameter(node->right);
   
   return max(op1,max(op2,op3));
}
