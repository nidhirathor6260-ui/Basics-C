#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
     Node(int val){
        data = val;
        next = NULL;
     }
    
};



int main(){

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* thrid = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;
    second->next = thrid;
    thrid->next = fourth;

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

    }

    Node* temp = prev;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
    return 0;
    
}
