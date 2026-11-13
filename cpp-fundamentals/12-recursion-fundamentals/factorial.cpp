#include <iostream>

using namespace std;

// n! = n * (n - 1) * ... * 1
// long long holds up to 20! (21! is too big even for long long).
long long factorial(int n) {
    if (n <= 1) {                       // base case
        return 1;
    }
    return n * factorial(n - 1);        // recursive case
}

int main() {
    for (int n = 0; n <= 5; n++) {
        cout << n << "! = " << factorial(n) << '\n';
    }
    cout << "20! = " << factorial(20) << '\n';
    return 0;
}
