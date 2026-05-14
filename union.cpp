#include<bits/stdc++.h>
using namespace std;

vector<int> Union(vector<int> v1, vector<int> v2){
   set<int> s;
   for(int i = 0 ;  i<v1.size() ; i++){
        s.insert(v1[i]);
   }

   for(int i = 0 ;  i<v2.size() ; i++){
        s.insert(v2[i]);
   }

   vector<int> unioon;
   for(auto it : s){
     unioon.push_back(it);
   }

   return unioon;

}


// Two pointer approach only for sorted arrays
vector<int> Uni(vector<int> v1, vector<int> v2){
    int n1 = v1.size();
    int n2 = v2.size();
    int i = 0 , j = 0;

    vector<int> ans;
    while(i<n1 && j<n2){
        if(v1[i]<=v2[j]){
            if(ans.size() == 0 || ans.back() != v1[i])
            ans.push_back(v1[i]);
            i++;
        }
        else{
        if(ans.size() == 0 || ans.back() != v2[j]){
            ans.push_back(v2[j]);
        }
        j++;
    }
    }

   while(i<n1){
      if(ans.size() == 0 || ans.back() != v2[j])
         ans.push_back(v1[i]);
      i++;
   }

    while(j<n2){
      if(ans.size() == 0 || ans.back() != v2[j])
         ans.push_back(v2[j]);
       j++;
   }

   return ans;
}


int main(){
    vector<int> v1 = {5, 2, 4 , 2 , 1};
    vector<int> v2 = {6, 2, 4 , 2 , 1};
  
    vector<int> unioon = Union(v1, v2);

    cout << "Union of two vectors: ";
    for(int i = 0 ; i<unioon.size() ; i++){
        cout << unioon[i] << " ";
    }

    cout << "\n";

    vector<int> a = {1, 2 , 2, 5 , 6};
    vector<int> b = {2, 3 , 5 , 7, 9, 10};
    vector<int> uni = Uni(a, b);

    cout << "Union of two vectors: ";
    for(int i = 0 ; i<uni.size() ; i++){
        cout << uni[i] << " ";
    }

  
   
}