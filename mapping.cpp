#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n ;
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i<n;i++){
        cin >>arr[i];
    }
    map<int , int> mpp;
    for(int i = 0 ; i<n ; i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        cout << it.first << "->" << it.second << "\n";
    }
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        cout << mpp[num]<< "\n";
    }
    
}

