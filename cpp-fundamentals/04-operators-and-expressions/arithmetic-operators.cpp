#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "a + b = " << a + b << '\n';
    cout << "a - b = " << a - b << '\n';
    cout << "a * b = " << a * b << '\n';
    cout << "a / b = " << a / b << '\n';          // integer division drops the decimal part
    cout << "a % b = " << a % b << '\n';          // remainder after division
    cout << "10 / 3.0 = " << 10 / 3.0 << '\n';    // one double operand gives a decimal result

    return 0;
}
