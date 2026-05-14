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

        void insertAt(int val, int k){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                return;
            }if( k == 0){
                push_front(val);
                return;
            }
            Node* temp = head;
            for(int i = 1 ; i<k ; i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            
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

        Node* removeDuplicates(Node* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        Node* temp = head;
        while(temp!=NULL && temp->next !=NULL){
            if(temp->data == temp->next->data){
                Node* duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate;
            }else{
                temp = temp->next;
            }
        }
        return head;
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

    ll.insertAt(4,1);
    ll.printll();

 return 0;
}