#include <iostream>

using namespace std;

int power(int base, int exponent = 2);   // the default value goes in the declaration

int main() {
    cout << "power(5) = " << power(5) << '\n';
    cout << "power(2, 10) = " << power(2, 10) << '\n';
    return 0;
}

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
