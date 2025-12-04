#include<iostream>
#include<stack>
using namespace std;

void reversed(stack<int> s){
    for(int i = 0 ; i<5 ; i++){
        cout << s.top() << " ";
        s.pop();
    }
}

int main(){
    
    stack<int> s;
    for(int i = 0 ; i<5 ; i++){
        int num ;
        cin >> num;
        s.push(num);
    }
    reversed(s);
    
    
}
