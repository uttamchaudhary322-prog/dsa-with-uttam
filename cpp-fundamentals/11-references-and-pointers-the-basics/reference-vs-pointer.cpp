#include <iostream>

using namespace std;

int main() {
    int a = 1, b = 2;

    // Reference: another name. Must start with a variable. Never re-points.
    int& r = a;
    r = 10;                       // a becomes 10
    cout << "a = " << a << '\n';

    // Pointer: holds an address. Needs * to reach the value. Can re-point.
    int* p = &a;
    *p = 20;                      // a becomes 20
    p = &b;                       // now p points at b
    *p = 30;                      // b becomes 30
    cout << "a = " << a << ", b = " << b << '\n';

    // A pointer can also be empty. A reference cannot.
    int* nothing = nullptr;
    cout << "nothing is null? " << (nothing == nullptr) << '\n';

    return 0;
}
