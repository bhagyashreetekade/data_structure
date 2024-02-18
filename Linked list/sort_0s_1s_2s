/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    // Write your code here.

    if(head==NULL || head->next==NULL)return head;

    Node* dummyone=new Node(-1);
    Node* dummytwo=new Node(-1);
    Node* dummyzero=new Node(-1);

    Node* one=dummyone;
    Node* two=dummytwo;
    Node* zero=dummyzero;
    Node* temp=head;

    while(temp!=NULL){
        if(temp->data==0){
            zero->next=temp;
            zero=zero->next;
        }else if(temp->data==1){
            one->next=temp;
            one=one->next;
        }else if(temp->data==2){
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }

    zero->next=dummyone->next;
    one->next=dummytwo->next;
    two->next=NULL;

    return dummyzero->next;
}