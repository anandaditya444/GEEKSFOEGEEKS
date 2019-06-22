Node* addTwoLists(Node* first, Node* second) {
    Node* head = new Node(0);
    Node* p = first;
    Node* q = second;
    Node*cur = head;
    int carry = 0;
    while(p != NULL || q != NULL)
    {
        int x = p ? p->data : 0;
        int y = q ? q->data : 0;
        int sum = x + y + carry;
        carry = sum/10;
        cur->next = new Node(sum%10);
        cur = cur->next;
        if(p)
            p = p->next;
        if(q)
            q = q->next;
    }
    if(carry > 0)
        cur->next = new Node(carry);
    return head->next;
}