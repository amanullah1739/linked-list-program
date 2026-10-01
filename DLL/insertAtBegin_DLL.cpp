#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

void printforward(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printbackward(Node* tail){
    Node* temp = tail;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

Node* insertAtBegining(Node* head, int val){

    Node* newNode = new Node(val);

    if(head==nullptr){
        return newNode;
    }

    newNode->next = head;
    head->prev = newNode;

    return newNode;

}

int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    head = insertAtBegining(head, 5);

    printforward(head);
    printbackward(third);
    
    return 0;
}
