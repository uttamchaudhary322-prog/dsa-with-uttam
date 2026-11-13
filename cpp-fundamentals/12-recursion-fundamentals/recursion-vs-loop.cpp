#include <iostream>

using namespace std;

// The same job, two ways.
long long factorialLoop(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    cout << "Loop:      " << factorialLoop(10) << '\n';
    cout << "Recursion: " << factorialRecursive(10) << '\n';
    return 0;
}
