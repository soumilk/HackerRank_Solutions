

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp1=head->next;
    SinglyLinkedListNode* temp2=head;
    while(temp1!=nullptr){
        if(temp1->data==temp2->data){
            SinglyLinkedListNode* d=temp1;
            temp2->next=temp1->next;
            temp1=temp1->next;
            delete(d);
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return head;
}

