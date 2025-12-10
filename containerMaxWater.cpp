#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int height[n];
    for(int i = 0; i < n; i++){
        cin >> height[i];
    }
    int left = 0;
    int right = 8;
    int maxArea = 0;
    while(left < right){
        int heightLeft = height[left];
        int heightRight = height[right];
        int width = right - left;
        int currentArea = min(heightLeft, heightRight) * width;
        maxArea = max(maxArea, currentArea);
        if(heightLeft < heightRight){
            left++;
        } else {
            right--;
        }
    }
    cout << "Maximum water that can be contained is: " << maxArea << endl;
    return 0;
}