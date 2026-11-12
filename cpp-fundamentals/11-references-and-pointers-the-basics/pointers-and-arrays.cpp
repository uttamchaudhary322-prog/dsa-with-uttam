#include <iostream>

using namespace std;

int main() {
    int arr[4] = {10, 20, 30, 40};
    int* p = arr;             // the array name is the address of its first element

    cout << "*p = " << *p << '\n';              // 10
    cout << "*(p + 1) = " << *(p + 1) << '\n';  // 20
    cout << "p[2] = " << p[2] << '\n';          // 30, same as arr[2]

    // p + 1 moves by one int, not by one byte.
    cout << "Bytes between p and p + 1: "
         << (reinterpret_cast<char*>(p + 1) - reinterpret_cast<char*>(p)) << '\n';

    // Walk through the array with a pointer.
    for (int* q = arr; q < arr + 4; q++) {
        cout << *q << ' ';
    }
    cout << '\n';

    return 0;
}
