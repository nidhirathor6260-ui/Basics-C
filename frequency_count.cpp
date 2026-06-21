#include<iostream>
#include<vector>
#include<climits>
#include<map>

using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector<int> v(n,0) ;

    for(int i = 0; i<n ; i++){
        int num;
        cin >> num;
        v[i] = num;
    }
    map<int,int> freq;
    for(int i = 0; i<v.size(); i++){
            freq[v[i]]++;
    }

    for(auto it : freq){
        cout << it.first << "->" << it.second << "\n";
    }

  return 0;
}
