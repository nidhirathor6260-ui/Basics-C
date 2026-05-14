#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int kadane(int arr[], int n){
    int maxsum = INT_MIN;
    int currsum = arr[0];
    for(int i = 1 ; i<n; i++){
        currsum = max(arr[i], currsum + arr[i]);
        maxsum = max(currsum, maxsum);
    }
    return maxsum;
}
int main(){
    int arr[] = { 1 , -2 , 5 , -1 , -2 };
   int maxsum =  kadane(arr, 5);
   cout << "maxsum : " << maxsum;
}