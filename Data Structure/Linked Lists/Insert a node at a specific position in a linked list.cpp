

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) 
{
    SinglyLinkedListNode *new_node=new SinglyLinkedListNode(data);
    if(head==NULL or position==0)
    {
        new_node->next=head;
        return new_node;
    }

    SinglyLinkedListNode * temp;
    temp=head;
    while (position-1>0)
    {
        position-=1;
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    return head;

}

