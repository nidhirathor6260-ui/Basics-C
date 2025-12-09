#include <iostream>
#include<string>
#include<vector>
#include<numeric> //For accumulate the adjacent elements 
#include<algorithm>  // Its provide the max, min, find sort function
#include<climits>
using namespace std;


int maxSumArray(vector<int> nums ){
    int n = nums.size();
    int sum = 0;
    int maxsum = INT_MIN;
    for(int value : nums){
         sum+=value;
         maxsum = max(sum,maxsum);
         if( sum<0) sum= 0;
    }
    return maxsum;
}

int main() {
   
    int n ;
    cin >> n ;
    vector<int> v;
    while(n--){
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout << "Maximum sum subArray: "<<maxSumArray(v);
    
    
    
    
}