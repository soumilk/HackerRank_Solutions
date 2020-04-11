

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *first=head1;
    SinglyLinkedListNode *second=head2;
    SinglyLinkedListNode *last=nullptr;
    SinglyLinkedListNode *start=nullptr;
    if (first!=nullptr && second!=nullptr){
        if(first->data<second->data){
            last=first;
            first=first->next;
            last->next=nullptr;
            start=last;
        }
        else{
            last=second;
            second=second->next;
            last->next=nullptr;
            start=last;
        }
    }
    while(first!=nullptr && second!=nullptr){
        if(first->data<second->data){
            last->next=first;
            last=first;
            first=first->next;
            last->next=nullptr;
        }
        else{
            last->next=second;
            last=second;
            second=second->next;
            last->next=nullptr;
        }
    }
    if(first!=nullptr){ last->next=first;}
    if(second!=nullptr){last->next=second;}
    return start;
}

