#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> arr, int low, int high){
    int pivot = arr[low];
    int i = low +1;
    int j = high;
    while(i<=j){
        while(arr[i] <= pivot && i < high) i++;
        while(arr[j] > pivot && j > low) j--;
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[i + 1], arr[low]);
    return (i + 1);
}

void quickSort(vector<int> arr, int low, int high){
    if(low == high) return;
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
}

int main(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, arr.size() - 1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}