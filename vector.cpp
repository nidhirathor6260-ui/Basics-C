#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
// - Prints the vector elements in the same order.
// - Prints the vector elements in reverse order.
// - Finds the maximum and minimum element in the vector.
// - Calculates the sum of all elements.


int main() {
    // Write C++ code here
    int n ;
    cin >> n ;
    vector<int> v;
    for(int i = 0 ; i<n ; i++){
        int num;
        cin >> num ;
        v.push_back(num);
    }
    for(int val : v){
        cout << val << " ";
    }
    cout << "\n";
    // for(int i = 0 ; i<n ; i++){
    //     cout << v.back() << " ";
    //     v.pop_back();
    // }
    for(int i=(n-1) ; i>=0; i--){
        cout << v[i] << " ";
    }
    cout << "\n";
    int maxValue = *max_element(v.begin(), v.end());
    int minValue = *min_element(v.begin(), v.end());
    cout << "Minimum Element : " << minValue<< "\n";
    cout << "Maximum Element : "<< maxValue << "\n";
    int sum = accumulate(v.begin(), v.end(),0);
    cout << "Sum of Elements : " << sum << "\n";
    
    int mul = accumulate(v.begin(), v.end(), 1, multiplies<int>());
    cout << "Product of numbers : "<< mul << "\n";

    int sub = accumulate(v.begin(), v.end(), 0, minus<int>());
    cout << "Subtraction of numbers : "<< sub << "\n";
    
   

    return 0;
}