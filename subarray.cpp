#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i<n ; i++){
        for(int j = i ; j<n ; j++){
            for(int k = i ; k<=j; k++){
                cout << arr[k];
            }
            cout << " ";
        }
        cout << "\n";
    }
	vector<int> v;
	for(int i = 0 ; i<5 ; i++){
	    int num;
	    cin >> num;
	    v.push_back(num);
	}
	for(int i = 0 ; i<5 ; i++){
	    for(int j = i; j<5 ; j++){
	        for(int k = i; k<=j; k++ ){
	            cout << v[k] ;
	        }
	        cout << " ";
	    }
	    cout << "\n";
	}
	

}