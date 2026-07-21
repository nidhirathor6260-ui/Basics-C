#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n ;
    vector<int> arr(n);
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    int sum;
    cout << "Enter sum : ";
    cin >> sum;

    unordered_map<int,int> mp;
    int prefixsum = 0;
    mp[0] = -1;

    int maxlen = 0;
    for(int i = 0; i<n ; i++){
        prefixsum += arr[i];
        
        if(mp.find(prefixsum-sum) != mp.end()){
            int len = i - mp[prefixsum - sum];
            maxlen = max(maxlen , len);
        }
        else if(mp.find(prefixsum) == mp.end()){
            mp[prefixsum] = i;
        }
    }

    cout << "Maximum size with sum k : " << maxlen ;
    return 0;


}