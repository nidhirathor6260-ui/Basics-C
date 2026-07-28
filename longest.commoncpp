#include<iostream>
#include<string>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int n ;
    cout << "Enter n : ";
    cin >> n;
    vector<string> names(n);
    for(int i=0; i<n ; i++){
        cout <<names[i];
    }

    string ans = ""; int mincommon = INT_MAX;
    for(int i = 0; i<(n-1); i++){
        string s1 = names[i] , s2 = names[i+1];
        string common ;
        int k = 0; int j = 0;
        while(k<s1.length() && j<s2.length()){
            if(s1[k] == s2[j]) common+=s1[k];
            else break;
            k++; j++;
        }
        int length = common.length();
       if(mincommon<length){
            mincommon = min(mincommon,length);
            ans = common;
       }
    }

    cout << ans ;
    return 0;
}