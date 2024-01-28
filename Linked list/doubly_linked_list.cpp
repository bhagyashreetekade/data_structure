#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* prev;node* next;
        
        node(int val,node* front,node* back){
            data=val;
            prev=back;
            next=front;
        }
        
        node(int val){
            data=val;
            prev=next=NULL;
        }
};

node* convert2DoublyLL(vector<int>& arr){
    node* head=new node(arr[0]);
    node* back=head;
    
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,back);
        back->next=temp;
        back=back->next;
        
    }
    return head;
}

void insertAtTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    
    if(head==NULL){
        head=n;
    }
    else {
        while(temp->next!=NULL){
        temp=temp->next;
    }
        temp->next=n;
        n->prev=temp;
    }
}

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    n->next=temp;
    head=n;
    temp->prev=n;
}

void printlist(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main() {
    vector<int>arr={2,4,6,8};
    node* head=convert2DoublyLL(arr);
    cout<<"Convert vector to linked list : ";
    printlist(head);
    node* n=NULL;
    insertAtTail(n,11);
    insertAtTail(n,12);
    insertAtTail(n,13);
    insertAtHead(n,10);
    printlist(n);
}