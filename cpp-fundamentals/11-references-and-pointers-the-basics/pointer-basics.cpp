#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int* p = &x;      // p stores the ADDRESS of x

    cout << "x = " << x << '\n';
    cout << "*p = " << *p << '\n';                       // * reads the value at the address
    cout << "p holds x's address? " << (p == &x) << '\n';

    *p = 9;           // changes x through the pointer
    cout << "After *p = 9: x = " << x << '\n';

    int y = 20;
    p = &y;           // a pointer CAN be re-pointed
    *p = *p + 1;
    cout << "After p = &y and *p + 1: y = " << y << ", x = " << x << '\n';

    cout << "A pointer to int takes " << sizeof(p) << " bytes on this machine\n";

    return 0;
}
