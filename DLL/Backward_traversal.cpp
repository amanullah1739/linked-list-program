#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data1){
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};

void printbackward(Node* tail){
    Node* temp = tail;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    
    printbackward(third);
    return 0; 
}
