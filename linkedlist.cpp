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
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    
    cout << head->data << endl;
    cout << head->next->data << endl;
    cout << head->next->next->data << endl;
    
    return 0;
}
