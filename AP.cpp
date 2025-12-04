#include <iostream>
using namespace std;

bool canFormAP(int a, int b, int c) {
    // Case 1: Multiply 'a'
    if ((2 * b - c) > 0 && (2 * b - c) % a == 0) {
        return true;
    }

    // Case 2: Multiply 'b'
    if ((a + c) % (2 * b) == 0) {
        return true;
    }

    // Case 3: Multiply 'c'
    if ((2 * b - a) > 0 && (2 * b - a) % c == 0) {
        return true;
    }

    return false;
}

int main() {
    int a, b, c;
    cout << "Enter three positive integers: ";
    cin >> a >> b >> c;

    if (canFormAP(a, b, c)) {
        cout << "YES, they can form an AP." << endl;
    } else {
        cout << "NO, they cannot form an AP." << endl;
    }

    return 0;
}