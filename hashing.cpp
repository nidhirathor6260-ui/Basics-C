#include<iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n ; 
    cin >> n ;
    int  arr[n];
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    int hash[13]={0};
    for(int i = 0 ; i<n ; i++){
        hash[arr[i]]+=1;
    }
    int num;
    cin >> num;
    cout << hash[num]<< "\n";


}
