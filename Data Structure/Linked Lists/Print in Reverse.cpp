

// Complete the reversePrint function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void reversePrint(SinglyLinkedListNode* head) {
vector<int> v;
while (head!=NULL)
{
    int x =head->data;
    v.push_back(x);
    head=head->next;
}
for (int i=v.size()-1;i>=0;i--)
{
    cout<<v[i]<<endl;
}
}

