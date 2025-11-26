#include<iostream>
using namespace std;
void greet(string name){
     cout << "Hello "<< name << "\n";
     cout << "How are you? \n";
 }
 void endgreet(string name){
     cout << "Nice to meet you "<< name;
 }
 int main(){
     
     cout << "Enter your name: ";
     string name;
     cin >> name;
     greet(name);
     string s;
     cin >> s;
     endgreet(name);
 }