#include <iostream>
#include<string>
#include<sstream>
using namespace std;
#include<vector>

int main() {
   string s,word;
   getline(cin, s);
   stringstream ss(s);
   // By using vector
   vector<string> words;

   while(ss>>word){
       words.push_back(word);
   }
   int n = words.size();
   for(int i =n-1; i>=0 ; i-- ){
       cout << words[i]<< " ";
   }

// By using stack;

   stack<string> words;
   while(ss>>word){
       words.push(word);
   }
   int n = words.size();
 while(!words.empty()){
     cout << words.top()<< " ";
     words.pop();
 }
   cout << "\n";
   cout << "\n";

    return 0;
}