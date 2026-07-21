#include<iostream>
using namespace std;

int sum(int a ,int b){
    return (a+b);
}

int diff(int a ,int b){
    return (a-b);
}
int mul(int a ,int b){
    return (a*b);
}
int division(int a ,int b){
    return (a/b);
}

int main(){
    int a,b;
    cout << "Enter a and b : " ;
    cin >> a >> b;

    char ch;
    cout << "Enter operator: ";
    cin >> ch;

   if(ch == '+'){
      cout << "Sum : " << sum(a,b);
   }
   else if(ch == '-'){
     if(a>b)
        cout << "Diff : " << diff(a,b);
     else cout << "Diff : " << diff(b,a);
   }
   else if(ch == '*'){
    cout << "Multiply : " << mul(a,b);
   }
   else if( ch == '/'){
     if(b!=0){
        cout << "Division : " << division(a,b);
     }else cout << "Division not valid";
   }else{
    cout << "Invalid operator";
   }
return 0;
   
}