#include<iostream>
using namespace std;

class Student{
    public:
      string name;
      float marks;
      int rollno;
       
      void getinfo(){
         cout << "Enter name : ";
         cin >> name;
         cout << "Enter marks : ";
         cin >> marks;
         cout << "Enter roll number : ";
         cin >> rollno;
      }

      void display_info(){
            cout << "Name : " << name << endl;
            cout << "Marks : " << marks << endl;
            cout << "Roll number : " << rollno << endl;
      }
};

int main(){
   int n;
   cout << "Enter number of students : ";
   cin >> n;
   Student s1[n];

   for(int i = 0; i < n; i++){
       cout << "Enter details of student " << i+1 << endl;
       s1[i].getinfo();
   }

   cout << "Displaying details of students : " << endl;
   for(int i = 0; i < n; i++){
       cout << "Details of student " << i+1 << endl;
       s1[i].display_info();
   }

   float max_marks = s1[0].marks;
   int max_index = 0;
   for(int i = 1; i< n ; i++){
    if(s1[i].marks > max_marks){
        max_marks = s1[i].marks;
        max_index = i;
    }
   }

   cout << "Details of student with maximum marks :" <<endl;
   s1[max_index].display_info();

    return 0;

}