

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
if (head==NULL)
{
    cout<<"Nothing to delete"<<endl;
}
if (position==0)
{
    head=head->next;
    return head;
}
SinglyLinkedListNode *temp;
temp=head;
while (position-1>0)
{
    temp=temp->next;
    position-=1;
}
temp->next=temp->next->next;
return head;
}

