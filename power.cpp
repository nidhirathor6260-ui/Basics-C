#include<iostream>
using namespace std;
double pow(int x , int n){
    double ans = 1.0;
    while(n >0){
        if(n%2 ==1){
            ans *=x;
        }
        x*=x;
        n/=2;
    }
    return ans;
}

int main(){
    int x, n;
    cout << "Enter x and n : ";
    cin >> x >> n ;
    cout <<  pow(x, n);
}