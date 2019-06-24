

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 **/
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *newnode= new SinglyLinkedListNode(data);

    newnode->next=llist;
    if (llist==NULL)
    {
        llist=newnode;
        return llist;
    }
    llist=newnode;
    return llist;

}

