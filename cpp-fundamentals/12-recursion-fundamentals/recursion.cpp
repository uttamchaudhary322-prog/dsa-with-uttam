#include <iostream>

using namespace std;

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int sumTo(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumTo(n - 1);
}

int digitSum(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + digitSum(n / 10);
}

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter a number (0 to 20): ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Please enter a number from 0 to 20\n";
        return 0;
    }

    cout << "Factorial:   " << factorial(n) << '\n';
    cout << "Sum 1 to n:  " << sumTo(n) << '\n';
    cout << "Digit sum:   " << digitSum(n) << '\n';
    cout << "Fibonacci:   " << fib(n) << '\n';
    return 0;
}
