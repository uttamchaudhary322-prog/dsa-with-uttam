#include <iostream>

using namespace std;

void swapRef(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapPtr(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    swapRef(x, y);
    cout << "After swapRef: " << x << ' ' << y << '\n';

    swapPtr(&x, &y);
    cout << "After swapPtr: " << x << ' ' << y << '\n';

    int* p = &x;
    *p = *p + 100;
    cout << "After *p + 100: x = " << x << '\n';

    return 0;
}
