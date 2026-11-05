#include <iostream>

using namespace std;

// a and b are parameters: variables that receive the values.
int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    // x and y (and 3 and 4) are arguments: the actual values passed in.
    cout << "Sum: " << add(x, y) << '\n';
    cout << "add(3, 4) = " << add(3, 4) << '\n';

    return 0;
}
