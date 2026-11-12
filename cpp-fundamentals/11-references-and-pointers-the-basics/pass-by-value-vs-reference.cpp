#include <iostream>

using namespace std;

// Receives COPIES. The originals never change.
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Receives the ORIGINALS (a and b are other names for them).
void swapRef(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void addOne(int& n) {
    n++;
}

int main() {
    int x = 1, y = 2;

    swapValue(x, y);
    cout << "After swapValue: x = " << x << ", y = " << y << '\n';

    swapRef(x, y);
    cout << "After swapRef:   x = " << x << ", y = " << y << '\n';

    int count = 5;
    addOne(count);
    cout << "After addOne: count = " << count << '\n';

    return 0;
}
