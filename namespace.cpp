#include<iostream>
using namespace std;

namespace fruits{

    void detail(){
        cout << "Fruits are good for health" << endl;
    }
    void quantity_available(){
        cout << "For fruits quantity availale" << endl;
    }
};

namespace rice{
    void detail(){
        cout << "For rice detail function " << endl;
    }
    void quantity_available(){
        cout << "For Rice quantity available" << endl;
    }
};
int main(){
    fruits::detail();
    rice::detail();
    fruits::quantity_available();
    rice::quantity_available();
    return 0;
}