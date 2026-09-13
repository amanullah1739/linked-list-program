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
Node* insertatbegin(Node* head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
    return head;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = insertatbegin(head, 9);
    printList(head);
    
    
}
