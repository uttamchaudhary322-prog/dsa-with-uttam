#include <iostream>

using namespace std;

int square(int x) {
    return x * x;
}

bool isEven(int n) {
    return n % 2 == 0;
}

int absolute(int n) {
    if (n < 0) {
        return -n;   // return leaves the function immediately
    }
    return n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Square: " << square(n) << '\n';
    cout << "Absolute value: " << absolute(n) << '\n';

    if (isEven(n)) {
        cout << "Even\n";
    } else {
        cout << "Odd\n";
    }

    return 0;
}
