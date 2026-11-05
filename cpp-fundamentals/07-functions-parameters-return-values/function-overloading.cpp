#include <iostream>

using namespace std;

// Same name, different parameters: C++ picks the right one from the call.
int area(int side) {
    return side * side;
}

int area(int length, int width) {
    return length * width;
}

int maxOf(int a, int b) {
    return (a > b) ? a : b;
}

double maxOf(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "area(4) = " << area(4) << '\n';
    cout << "area(3, 5) = " << area(3, 5) << '\n';
    cout << "maxOf(3, 7) = " << maxOf(3, 7) << '\n';
    cout << "maxOf(2.5, 1.5) = " << maxOf(2.5, 1.5) << '\n';
    return 0;
}
