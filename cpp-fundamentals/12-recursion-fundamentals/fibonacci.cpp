#include <iostream>

using namespace std;

long long calls = 0;   // counts how many times fib runs

int fib(int n) {
    calls++;
    if (n <= 1) {                       // base cases: fib(0) = 0, fib(1) = 1
        return n;
    }
    return fib(n - 1) + fib(n - 2);     // two recursive calls
}

int main() {
    for (int n = 0; n <= 10; n++) {
        cout << fib(n) << ' ';
    }
    cout << '\n';

    calls = 0;
    fib(25);
    cout << "fib(25) needed " << calls << " calls\n";

    // The same work is repeated again and again.
    // Faster versions (memoization, loops) come later in the DSA series.
    return 0;
}
