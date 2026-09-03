#include <bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  
  public:
  Node(int data1){
      data = data1;
      next = nullptr;
  }
};
Node* convertarr2ll(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int finder(Node* head, int target){
    Node* temp = head;
    while(temp){
        if(temp->data == target){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
Node* deleteatfirst(Node* head){
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
    
    
}
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* removelast(Node* head){
    Node* temp = head;
    if(head==nullptr || head->next == nullptr){
        return head;
    }
    while(temp->next->next){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}

int main(){
    vector<int> arr = {2,4,6,8,9};
    Node* head = convertarr2ll(arr);
    head = removelast(head);
    print(head);
}
