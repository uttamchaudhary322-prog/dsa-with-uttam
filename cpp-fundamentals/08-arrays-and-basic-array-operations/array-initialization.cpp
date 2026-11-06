#include <iostream>

using namespace std;

int main() {
    int a[5] = {10, 20, 30, 40, 50};   // every value given
    int b[] = {1, 2, 3};               // size is worked out: 3
    int c[5] = {1, 2};                 // the rest become 0: 1 2 0 0 0
    int d[5] = {};                     // all zeros

    cout << "a: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';

    cout << "b has " << sizeof(b) / sizeof(b[0]) << " elements\n";

    cout << "c: ";
    for (int i = 0; i < 5; i++) {
        cout << c[i] << ' ';
    }
    cout << '\n';

    cout << "d: ";
    for (int i = 0; i < 5; i++) {
        cout << d[i] << ' ';
    }
    cout << '\n';

    return 0;
}
