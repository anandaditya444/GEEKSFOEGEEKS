int minValue(struct node* node)  
{  
	struct node* current = node;  
	  
	/* loop down to find the leftmost leaf */
	while (current->left != NULL)  
	{  
	    current = current->left;  
	}  
	return(current->data);  
}