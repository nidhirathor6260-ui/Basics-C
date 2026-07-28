#include<iostream>
using namespace std;

class ABC{
    public:
    static int x;
    static void show(){
        cout << "This is a show function of class. " << "\n";
        cout << "Value of x is : "<< x << endl;
    }
};

int ABC::x = 5;
int main(){
  
    ABC::show();
    ABC::x = 10;
    ABC::show();

}

// WAP to create two function calculate1 and calculate2, In calculate1 : take three input from the user
// and check whether it is even positive number or not and in calculate2 : pass three value as parameter 
// and find the sum of two smallest number;

// #include<iostream>
// using namespace std;


// int calculate2(int a,int b, int c){
//     int sum = 0;
//     if(a>=b && a>=c){
//         sum = b+c;
//     }else if(b>=a && b>=c){
//         sum = a+c;
//   }else if(c>=a && c>=b){  
 //   sum = a+b; 
//}
//    return sum;
// }

// int main(){
//     int a,b,c;
//     cout << "Enter three number : ";
//     cin >> a >> b >> c;

//     calculate1(a,b,c);
//     int sum = calculate2(a,b,c);
//     cout << "Sum of two smallest number is : " << sum << endl;

//     return 0;
// }

