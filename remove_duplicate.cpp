#include<iostream>
#include<vector>
#include<algorithm>
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
   sort(v.begin(),v.end());
   for(int i = 0; i<v.size()-1;i++){
    if(v[i] == v[i+1]){
        v.erase(v.begin()+i);
        i--;
    }
   }

   for(int x : v){
    cout << x << " ";
   }

  return 0;
}
