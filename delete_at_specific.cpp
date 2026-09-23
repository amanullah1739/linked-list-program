#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* deleteAtSpecific(Node* head, int pos){
    if(head == nullptr || pos<=0){
        return nullptr;
    }
    if(head->next==nullptr){
        return head;
    }
    Node* temp = head;
    for(int i=1; i<pos-1 && temp!=nullptr; i++){
        temp= temp->next;
    }
    if(temp==nullptr || temp->next==nullptr){
        return head;
    }
    Node* nodeToDelete = temp->next;
    temp->next=temp->next->next;
    delete nodeToDelete;
    return head;
}


void printList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    
    head = deleteAtSpecific(head, 2);
    printList(head);
}








