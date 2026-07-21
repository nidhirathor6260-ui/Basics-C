// #include<iostream>
// using namespace std;
// #define size 10

// class Stack{
//     private:
//         int arr[size];
//         int top;
//     public:
//         Stack(){
//             top = -1;
//         }
//         void push(int x){
//             if(top == size - 1){
//                 cout << "Stack Overflow" << endl;
//             }
//             else{
//                 top++;
//                 arr[top] = x;
//             }
//         }
//         void pop(){
//             if(top == -1){
//                 cout << "Stack Underflow" << endl;
//             }
//             else{
//                 top--;
//             }
//         }
//         void display(){
//             if(top == -1){
//                 cout << "Stack is empty" << endl;
//             }
//             else{
//                 cout << "Elements in the stack are: ";
//                 for(int i = 0; i <= top; i++){
//                     cout << arr[i] << " ";
//                 }
//                 cout << endl;
//             }
//         }
// };

// int main(){
//     Stack s;
//     int choice, value;
//         cout << "1. Push" << endl;
//         cout << "2. Pop" << endl;
//         cout << "3. Display" << endl;
//         cout << "4. Exit" << endl;
//     do{
//       
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch(choice){
//             case 1:
//                 cout << "Enter value to push: ";
//                 cin >> value;
//                 s.push(value);
//                 break;
//             case 2:
//                 s.pop();
//                 break;
//             case 3:
//                 s.display();
//                 break;
//             case 4:
//                 cout << "Exiting..." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice" << endl;
//         }
//     }while(choice != 4);

//     return 0;
// }

#include<iostream>
using namespace std;

struct Node{
    int info;
    Node* next;
};

struct Stack{
    Node* top;
    
    Stack(){
        top = NULL;
    }

    void push(int x){
        Node* temp = new Node();
        temp->info = x;
        temp->next = top;
        top = temp;
    }

    void pop(){
        if(top == NULL){
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    void peek(){
        if(top == NULL){
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Top element is: " << top->info << endl;
    }

    void traverse(){
        if(top == NULL){
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        cout << "Elements in the stack are: ";
        while(temp != NULL){
            cout << temp->info << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};

int main(){
    Stack s;
    int choice, value;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Peek" << endl;
    cout << "4. Traverse" << endl;
    cout << "5. Exit" << endl;
    do{
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.traverse();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(choice != 5);

    return 0;
}
