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

 void insertAtHead(Node* &head,int val){
     Node* n=new Node(val);
     n->next=head;
     head=n;
 }

void deletion(Node* &head,int val){
    Node* n=new Node(val);
    Node* temp=head;
    
    //if value of head is that value
    if(head->data==val){
        head=head->next;
        delete temp;
    }
    else{
        while(temp->next->data!=val){
            temp=temp->next;
        }
        Node* t=temp->next;
        temp->next=temp->next->next;
        delete t;
    }
}

bool search(Node* head,int key){
    while(head->next!=NULL){
        if(head->data==key){
            return true;
        }
        head=head->next;
    }
    return false;
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
    insertAtHead(head,10);
    printlist(head);
    cout<<endl;
    deletion(head,6);
    printlist(head);
    cout<<endl<<"Element is " <<search(head,5);
    
}