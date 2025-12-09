#include<bits/stdc++.h>
using namespace std;

int main() {
//   string s;
//   getline(cin , s);
//   cout << s << "\n";
//   cout << "Length of string is : " << s.length() << "\n";
    string s1, s2;
    cin >> s1 >> s2 ;
    int n = min(s1.length(), s2.length());
    for(int i = 0 ; i<n ; i++){
        if(i%2==0){
            swap(s1[i], s2[i]);
        }
    }
    cout << s1 << "\n" << s2 << "\n";
}