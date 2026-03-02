#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
     Node* prev;

     Node(int val){
        data = val;
        prev = next = NULL;
     }
};

class DoublyList{
       Node* head;
       Node* tail;

    public: 
       DoublyList(){
        head = tail = NULL;
       }

       void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
       }

       void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
       }

       void pop_front(){
            Node* temp = head;
            head = temp->next;
            head->prev = NULL;
            temp->next = NULL;
            delete temp;
       }

       void pop_back(){
            Node* temp = tail;
            tail = temp->prev;
            tail->next = NULL;
            temp->prev = NULL;
            delete temp;
       }

       void print_dll(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data;
            temp= temp->next;
            if(temp!=NULL) cout << "<=>";
        }
        cout << "->NULL" << "\n";
       }
};

int main(){
    DoublyList dll;
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);

    dll.print_dll();

    dll.push_back(4);

    dll.print_dll();

    dll.pop_front();
    dll.print_dll();

    dll.pop_back();
    dll.print_dll();

    return 0;
}