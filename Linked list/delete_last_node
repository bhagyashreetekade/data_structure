/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *deleteLast(Node *list){
    // Write your code here
    Node *head=list;
    while(list->next->next!=NULL){
        list=list->next;
    }
    Node* temp=list->next;
    list->next=NULL;
    delete temp;

    return head;
    

}