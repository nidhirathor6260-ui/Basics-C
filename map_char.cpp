#include <iostream>
#include<map>
using namespace std;

int main() {
    // Write C++ code here
   string s;
   cin >> s;
   
    map<char, int> mpp;
    for(int i = 0 ; i<s.length(); i++){
        mpp[s[i]]++;
    }
    for(auto it : mpp){
        cout << it.first << "->" << it.second << "\n";
    }
    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        cout << mpp[c] << "\n";
    }
    
}
