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

void printlist(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main() {
    vector<int>arr={2,4,6,8};
    
    node* head=convert2DoublyLL(arr);
    printlist(head);
    
}