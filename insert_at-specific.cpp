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

Node* insertAtSpecific(Node* head, int val, int pos){
    if(pos<=0){
        return head;
    }
    if(pos==1){
        Node* newNode = new Node(val);
        newNode->next = head;
        return newNode;
    }
    
    Node*temp = head;
    for(int i=1; i<pos-1 && temp != nullptr; i++){
        temp=temp->next;
    }
    if(temp==nullptr) return head;
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
    
}

void printll(Node* head){
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
    head = insertAtSpecific(head,60,2);
    printll(head);
}
