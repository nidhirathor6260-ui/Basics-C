#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> arr(n);
    int evencount = 0;
    int oddcount = 0;
    int special = 0;
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
        if(arr[i]>50) special++;
        if(arr[i] == 0) continue;
        else if(arr[i]%2 == 0) evencount++;
        else if(arr[i]%2 != 0) oddcount++;
    }

    if(evencount>oddcount) cout << "Even team wins.";
    else cout << "Odd team wins.";
    return 0;
}