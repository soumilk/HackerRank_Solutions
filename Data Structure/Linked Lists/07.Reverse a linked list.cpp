

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
  SinglyLinkedListNode *Next, *Temp, *Prev;

  Temp = head;
  Prev = NULL;

  while (Temp) {
    Next = Temp->next;
    Temp->next = Prev;
    Prev = Temp;
    Temp = Next;
  }

  head = Prev;
  return head;
}

