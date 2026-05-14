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

class CircularList{
    Node* head;
    Node* tail;
    
    public:
        CircularList(){
            head = tail = NULL;
        }

        void insertAtHead(int val){
           
            Node* newNode = new Node(val);
             if(head == NULL){
                head = tail =  newNode;
                tail->next = newNode;
                return;
            }
            newNode->next = head;
            head = newNode;
            tail->next = head;
  }

        void insertAtTail(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                tail->next = newNode;
                return ;
            }
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
         }

         void pop_back(){
            
            if(head == NULL) return;
            if(head == tail){
                delete head;
                head = tail = NULL;
                return;
            }
            Node* temp = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = head; 
         }

         void pop_front(){
            if(head == NULL) return;
            else if(head == tail){
                delete head;
                head = tail = NULL;
                return;
            }else{
                Node* temp = head;
                head = temp->next;
                tail->next = head;
                delete temp;
            }
         }

        void print(){
            if(head == NULL){
                cout << "Linked list is empty";
                return;
            }
            cout << head->data << "->";
            Node* temp = head->next;
            while(temp!= head){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "HEAD" << "\n";

        }

};

int main(){
    CircularList ll;

    ll.insertAtHead(4);
    ll.insertAtHead(3);
    ll.insertAtHead(2);
    ll.print();

    ll.insertAtTail(7);
    ll.print();

    ll.pop_front();
    ll.print();

    ll.pop_back();
    ll.print();


    return 0;
    
}