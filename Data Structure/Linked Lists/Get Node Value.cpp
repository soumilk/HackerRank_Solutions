

// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
int posfromfront=0;
int length=0;
SinglyLinkedListNode *temp;
temp=head;
while (temp!=NULL)
{
    temp=temp->next;
    length+=1;
}
//return length;
posfromfront=length-positionFromTail;
length=1;
while (head!=NULL)
{
    if (length==posfromfront)
    return head->data;
    else
    {
        head=head->next;
        length+=1;
    }
}
return 0;
}

