#include<iostream>
using namespace std;
int main() {
    // Write C++ code here
    string s;
    cin >> s;
    int n = s.length();
    int hash[26]={0};
    for(int i = 0 ; i<n ; i++){
        hash[s[i]-'a']+=1;
    }
    char c;
    cin >> c;
    cout << hash[c-'a']<< "\n";
}