#include<iostream>
using namespace std;

class Employee{
    public:
        int id;
        string name;
        float salary;
        string department;

        void getinfo(){
            cout << "Enter employee id : ";
            cin >> id;
            cout << "Enter employee name : ";
            cin >> name;
            cout << "Enter employee salary : ";
            cin >> salary;
            cout << "Enter employee department : ";
            cin >> department;
        }

        void display_salary(){
            salary -= salary * 0.1;
            salary -= salary *0.05;
        
            cout << "Employee id : " << id << endl;
            cout << "Employee name : " << name << endl;
            cout << "Employee salary : " << salary << endl;
            cout << "Employee department : " << department << endl;
        }

};

int main(){
    int n;
    cout << "Enter number of employees : ";
    cin >> n;
    Employee e1[n];

    for(int i = 0; i < n; i++){
        cout << "Enter details of employee " << i+1 << endl;
        e1[i].getinfo();
    }

    cout << "Displaying salary of each employee after deduction : " << endl;
    for(int i = 0; i < n; i++){
        cout << "Details of employee " << i+1 << endl;
        e1[i].display_salary();
    }
    return 0;
}