/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addOne(Node *head)
{
    Node* temp=head;
    Node* lastonenine=NULL;

    while(temp!=NULL){
        if(temp->data!=9){
            lastonenine=temp;
        }
        temp=temp->next;
    }

    // If the lastNonNine is null, it means all nodes are 9
    if(lastonenine==NULL){
        Node* newnode=new Node(1,head);
        head=newnode;

        temp=head->next;

        while(temp!=NULL){
            temp->data=0;
            temp=temp->next;
        }

    }
    else{
        lastonenine->data+=1;
        temp=lastonenine->next;
        
         while (temp != nullptr) {
            temp->data = 0;
            temp = temp->next;
        }
    }
    return head;

}
