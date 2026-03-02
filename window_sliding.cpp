#include<iostream>
#include<vector>
using namespace std;

vector<int> pizza(vector<int> v ,int windsize){
    int n = v.size();
    vector<int> ans;
    for(int i = 0 ; i<=(n-windsize) ; i++){
      int windIdx = 0 , idx = i;
      bool found = false;
      while(windIdx < windsize && idx<n){
        if(v[idx]<0){
            ans.push_back(v[idx]);
            found = true;
            break;
        }
        windIdx++; idx++;
      }
      if(!found){
        ans.push_back(0);
      }
    }
    return ans;
}

int main(){
    int size, windsize;
    cin >> size >> windsize;
    vector<int> v;
    for(int i = 0 ; i<size ; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    vector<int> ans = pizza(v, windsize);
    for(int num : ans){
        cout << num << " ";
    }

}