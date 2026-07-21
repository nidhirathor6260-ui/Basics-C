// #include<iostream>
// #include<climits>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     int n ; 
//     cout << "Enter n : ";
//     cin >> n ;
//     vector<int> arr(n);
//     for(int i = 0; i<n ; i++){
//         cin >> arr[i];
//     }

//     int window;
//     cout << "Enter window size: ";
//     cin >> window;

//     int maxsum = INT_MIN;
//      int currsum = 0;
//      int j = 0;
//     for(int i = 0; i<n ; i++){
      
//         int windIdx = 0;
      
//         while(j<n && windIdx<window){
//             currsum+=arr[j];
//              j++;
//              windIdx++;
//         }
//         maxsum = max(currsum , maxsum);
//         currsum -= arr[i];
        
//         }
      
//     cout << "Maximum sum : " << maxsum;
//     return 0;
// }

//Question: longest subarray with given sum k;

#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n ; 
    cout << "Enter n : ";
    cin >> n ;
    vector<int> arr(n);
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }

   int sum;
   cout << "Enter sum : ";
   cin >> sum;

//    int maxsize = 0;
   
//    for(int i = 0; i<n ; i++){
//     int j = i;
//     int currsum = 0;
//      while(j<n ){
//         currsum += arr[j];

//         if(currsum == sum){
//             int size = j-i+1;
//             maxsize = max(size, maxsize);

//         }
    
//         j++;

//      }

//    }

    int maxsize = 0;
    int j = 0;
    int currsum = 0;
    for(int i = 0; i<n ; i++){
        currsum += arr[i];
        while(currsum > sum && j<=i){
             currsum -= arr[j];
             j++;
        }

        if(currsum == sum){
            maxsize = max(maxsize, i-j+1);
        }

    }
     cout << "Maximum size with sum k : " << maxsize;
   

   return 0;
}


