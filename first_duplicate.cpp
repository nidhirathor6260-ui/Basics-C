#include<iostream>
#include<vector>
#include<algorithm> //algirthm provdies the functions like max , find , count etc
using namespace std;

int main(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n ; i++){
        cin >> arr[i];  
        if(count(arr.begin(), arr.end(), arr[i]) == 2){
            cout << "First duplicate element is: " << arr[i] << endl;
            return 0;
        }
    }

}