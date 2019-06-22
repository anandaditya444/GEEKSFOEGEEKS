/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
/*  This function should rotate list counter-clockwise
    by k and return new head (if changed) */
Node* rotate(Node* head, int k) {
    if(head == NULL)
        return NULL;
    Node* cur = head;
    int cnt = 0;
    while(cur != NULL && cnt < k-1)
    {
        cur = cur->next;
        cnt++;
    }
    Node* temp = cur;
    while(cur->next != NULL)
        cur = cur->next;
    cur->next = head;
    Node* ans = temp->next;
    temp->next = NULL;
    
    return ans;
}
