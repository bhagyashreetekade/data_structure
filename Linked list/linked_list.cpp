// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
        Node(int val){
            data=val;
            next=NULL;
        }
};
void insertAtTail(Node* &head,int val){
    //creating a new node
    Node* n=new Node(val);
    
    //if head is null
    if(head==NULL){
        head=n;return ;
    }
    //storing the head
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void printlist(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main() {
    //head pointer is assigned the memory address of the newly created node object. 
    Node* head=new Node(4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    printlist(head);
    
}