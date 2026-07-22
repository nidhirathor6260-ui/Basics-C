#include <iostream>
using namespace std;

// using namespace functions
namespace first{
    void sayHello(){
        cout << "Hello from first namespace" << endl;
    }
}
namespace second{
    void sayHello(){
        cout << "Hello from second namespace" << endl;
    }
}
// Scope Resolution Operator
class A{
    private:
        int x;
        int y;
    public:
        void display(){
            cout << "The value of x and y is: " << x << " and " << y << endl;
        }
        void getdata();
};

void A::getdata(){
    cout << "Enter the value of x and y: ";
    cin >> x >> y;
}

int x = 10;

int main() {
    // Write C++ code here
    // int a = 5;
    // int &b = a; // referencing to same memory stored value;
    
    // cout << b << endl;
    // int* c = &a;
    // b = 10;
    // cout << a << endl;
    // cout << c << endl;
    // cout << *c << endl;
    // cout << *(&a) <<endl;
    
    int x = 15;
    cout << x << endl;
    cout << ::x << endl; //:: scope resolution operator

    A obj;
    obj.getdata();
    obj.display();

    first::sayHello();
    second::sayHello();

    return 0;
}