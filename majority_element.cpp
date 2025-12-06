#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int majorityElement(vector<int> &nums){
    // vector<int> ans;
    int n = nums.size();
    // for(int i = 0; i < n; i++){
    //     int count = 0;
    //     for(int j = 0; j < n; j++){
    //         if(nums[i] == nums[j]){
    //             count++;
    //         }
    //     }
    //     if(count > n/2){
    //         ans.push_back(nums[i]);
    //     }
    // }
    // if(!ans.empty()){
    //     return ans[0];
    // }
    // return -1;


    // sort(nums.begin(), nums.end());
    // int count = 1, ans=nums[0];
    // for(int i = 1  ; i<n  ; i++){
    //     if(nums[i] == nums[i-1]){
    //         count++;
    //     }
    //     else {
    //         count = 0;
    //         ans = nums[i];
    //     } 
    //    if(count > n/2) return ans;
    // }
    // return -1;
    
    
    int freq = 0 , ans;
    for(int i = 0 ; i< n ; i++){
        if(freq==0){
            ans = nums[i];
        }
        if(nums[i] ==ans){
            freq++;
        }
        else {
            freq--;
        }
    }
    int count = 0;
    for(int val : nums){
            if(val == ans){
                count++;
            }
        }
    if(count > n/2) return ans;
    return -1;
    }


int main(){
    int n;
    cin >> n ;
    vector<int> v;
    while(n--){
        int num ;
        cin >> num;
        v.push_back(num);
    }
    cout << majorityElement(v) << endl;
    return 0;
}