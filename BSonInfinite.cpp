#include<iostream>
#include<vector>
using namespace std;

int binary_search_infinite(vector<int>& arr, int target) {
    int low = 0;
    int high = 1;
    while(target>arr[high]) {
        low = high;
        high *= 2;
    }
    while(low<=high) {
        int mid = low + (high-low)/2;
        if(arr[mid]==target) {
            return mid;
        }
        else if(arr[mid]<target) {
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return -1;
}