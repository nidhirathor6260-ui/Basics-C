#include<iostream>
#include<algorithm>
#include<queue>
#include<set>
using namespace std;


int main(){
   priority_queue<int> q;
   q.push(5);
   q.push(2);
   q.push(10);

   // largest element is at the top of the priority queue
   // did't follow fifo order
   cout << q.top() << endl; // 10
   cout << "Size of priority queue: " << q.size() << endl;



   // set is a collection of unique elements, it does not allow duplicates
   set<int> s;
   s.insert(5);
   s.insert(2);
   s.insert(10);
   cout << s.size() << endl;

   for(int x: s){
      cout << x << " ";
   }
   cout << endl;
   set<int> result;
   set<int> s2 = {5, 2, 10, 5, 2, 10};
   set_intersection(s.begin(), s.end(), s2.begin(), s2.end(), inserter(result, result.begin()));
   
   cout << "Intersection of s and s2: " << endl;
   for(int x: result){
      cout << x << " ";
   }
   cout << endl;
   result.clear();
   cout << "Difference of s and s2: " << endl;
   set_difference(s.begin(), s.end(), s2.begin(), s2.end(), inserter(result, result.begin()));
   for(int x: result){
      cout << x << " ";
   }
   cout << endl;
   return 0;
}