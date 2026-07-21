#include<iostream>
#include<vector>
#include<climits>
#include<map>

using namespace std;

int main(){
    int n;
    cout << "Enter number of students: ";
    cin >> n;
   
    map<string,int> data;
    cout << "Enter students name and grade: ";
    int maxGrade = INT_MIN;
    for(int i = 0; i<n ; i++){
        string name;
        int grade;
        cin >> name >> grade;
        data[name] = grade;
        maxGrade = max(maxGrade , grade);
    }

    for(auto it : data){
        if(it.second == maxGrade){
            cout << it.first << " has the highest grade. ";
        }
    }

    
   


  return 0;
}
