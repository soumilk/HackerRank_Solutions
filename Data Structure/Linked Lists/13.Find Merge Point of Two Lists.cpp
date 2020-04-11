// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* 
 
 next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {
    SinglyLinkedListNode* currentA = headA;
    SinglyLinkedListNode* currentB = headB;

    //Do till the two nodes are the same
    while(currentA != currentB){
        //If you reached the end of one list start at the beginning of the other one
        //currentA
        if(currentA->next == nullptr){
            currentA = headB;
        }else{
            currentA = currentA->next;
        }
        //currentB
        if(currentB->next == nullptr){
            currentB = headA;
        }else{
            currentB = currentB->next;
        }
    }
    return currentB->data;

}
