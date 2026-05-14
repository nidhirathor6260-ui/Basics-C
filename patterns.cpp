#include<iostream>
using namespace std;
void triangle(int n){
    for(int i = 1 ; i<n ; i++){
        for(int j = 1 ; j<=n-i; j++){
            cout << " ";
        }
        for(int j = 1 ; j<=2*i-1; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

void invertedTriangle(int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<i ; j++){
            cout << " ";
        }
        for(int j = 0 ; j<2*n-(2*i+1) ; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

void star(int n){
    triangle(n);
    invertedTriangle(n);
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    triangle(n);
    cout << "\n";
    invertedTriangle(n);
    cout << "\n";
    star(n);

}