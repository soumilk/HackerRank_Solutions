 
// Complete the reverse function below.

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
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* temp = head;
    DoublyLinkedListNode* newHead = head;
    while (temp != nullptr) {
        DoublyLinkedListNode* prev = temp->prev;
        temp->prev = temp->next;
        temp->next = prev;
        newHead = temp;
        temp = temp->prev;
    }
    return newHead;
}
