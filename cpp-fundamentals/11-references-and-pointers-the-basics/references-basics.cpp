#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int& ref = x;     // ref is another name for x

    cout << "x = " << x << ", ref = " << ref << '\n';

    ref = 20;         // changes x
    cout << "After ref = 20: x = " << x << '\n';

    x = 30;           // ref sees the change too
    cout << "After x = 30: ref = " << ref << '\n';

    cout << "Same address? " << (&x == &ref) << '\n';

    // A reference cannot be re-pointed. This copies y's VALUE into x.
    int y = 99;
    ref = y;
    cout << "After ref = y: x = " << x << ", y = " << y << '\n';
    y = 1;
    cout << "After y = 1: x = " << x << " (x did not follow y)\n";

    return 0;
}
