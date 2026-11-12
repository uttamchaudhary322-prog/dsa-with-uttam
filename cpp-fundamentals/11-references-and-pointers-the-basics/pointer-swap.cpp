#include <iostream>

using namespace std;

// Receives two ADDRESSES and changes the values stored there.
void swapPtr(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 1, y = 2;

    swapPtr(&x, &y);   // pass the addresses with &
    cout << "x = " << x << ", y = " << y << '\n';

    return 0;
}
