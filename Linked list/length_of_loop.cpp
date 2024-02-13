/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/
int findlength(Node* slow,Node* fast){
   int cnt=1;
   fast=fast->next;
    while(slow!=fast){
        cnt++;
        fast=fast->next;
        
    }
    return cnt;
}

int lengthOfLoop(Node *head) {
    // Write your code here

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

        if(slow==fast){

            return findlength(slow,fast);
            
        }
    }
    return 0;
}
