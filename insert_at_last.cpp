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

Node* insertatlast(Node* head, int val){
    Node* newNode = new Node(val);
    if(head->next==nullptr){
        return newNode;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next=newNode;
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
    head = insertatlast(head, 9);
    printList(head);
    
    
}
