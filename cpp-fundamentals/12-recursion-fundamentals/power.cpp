#include <iostream>

using namespace std;

// base^exp for exp >= 0
long long power(long long base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}

int main() {
    cout << "2^10 = " << power(2, 10) << '\n';
    cout << "3^4 = " << power(3, 4) << '\n';
    cout << "5^0 = " << power(5, 0) << '\n';
    return 0;
}
