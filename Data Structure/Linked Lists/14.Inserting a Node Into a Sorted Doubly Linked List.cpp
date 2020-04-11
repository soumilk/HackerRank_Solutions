// Complete the sortedInsert function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
DoublyLinkedListNode *current=head;
DoublyLinkedListNode *tail=nullptr;
if(data<head->data){
    DoublyLinkedListNode *temp=new DoublyLinkedListNode(data) ;
    temp->next=head;
    head->prev=temp;
    temp->prev=nullptr;
    head=temp;
    return head;
}
while(current!=nullptr && current->data < data){
    tail=current;
    current=current->next;
}
DoublyLinkedListNode *temp=new DoublyLinkedListNode(data);
temp->next=current;
temp->prev=tail;
tail->next=temp;
if(current)
    current->prev=temp;
    
return head;
}
