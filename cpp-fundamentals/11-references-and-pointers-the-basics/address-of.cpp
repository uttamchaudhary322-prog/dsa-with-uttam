#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 5;

    cout << "a = " << a << '\n';
    cout << "Address of a: " << &a << '\n';   // the address changes on every run
    cout << "Address of b: " << &b << '\n';

    // Two different variables always live at different addresses,
    // even when they hold the same value.
    cout << "Same value? " << (a == b) << '\n';
    cout << "Same address? " << (&a == &b) << '\n';

    return 0;
}
