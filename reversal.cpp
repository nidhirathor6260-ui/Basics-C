#include<iostream>
using namespace std;
#include<list>

int main(){
    int n ; 
    cin >> n;
    list<int> l;
    for(int i = 0; i<n ; i++){
        int x;
        cin >> x;
        l.push_back(x);
    }

    l.reverse();

    for(int x : l){
        cout << x << "->";
    }
    return 0;
}