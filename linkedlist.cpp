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

class List{
    Node* head;
    Node* tail;

    public: 
        List(){
            head = tail = NULL;
        }
        void push_front(int val){
            Node* nextNode = new Node(val);

            if(head == NULL){
                head = tail = nextNode;
            }

            else{
                nextNode->next = head;
                head = nextNode;
            }
        }    

        void push_back(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        void pop_front(){
            if(head == NULL){
                cout << "Linkedlist is already empty";
                return ;
            }
            Node* temp = head;
            head = temp->next;

            temp->next = NULL;
            delete temp;
        }

        void pop_back(){
           if(head == NULL){
            cout << "Linkedlist is already empty";
            return ;
           }

           Node* temp = head;
           while(temp->next->next != NULL){
            temp = temp->next;
           }
           temp->next = NULL;
           delete tail;
           tail = temp;      
        }
        
        void printll(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }

       
};

int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);

    ll.printll();

    ll.push_back(3);
    ll.push_back(2);

    ll.printll();

    ll.pop_back();

    ll.printll();
    ll.pop_front();
    
    ll.printll();

 return 0;
}