#include<iostream>
using namespace std;

int circle(int r){
    return 3.14*r*r;
}
int rectangle(int a, int b){
    return a*b;
}
int main(){
    int r;
    cin >> r;
    cout << "Area of Circle is : " << circle(r)<< "\n";
    int a , b;
    cin >> a >> b;
    cout << "Area of Rectangle is : "<< rectangle(a,b) << "\n";
    
}