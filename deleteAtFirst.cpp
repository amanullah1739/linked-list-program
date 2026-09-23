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
Node* deleteAtFirst(Node* head){
    if(head==nullptr) return nulllptr;
    Node* temp = head;
    head = head->next;
    delete temp;
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
    head = deleteAtFirst(head);
    printList(head);
}








