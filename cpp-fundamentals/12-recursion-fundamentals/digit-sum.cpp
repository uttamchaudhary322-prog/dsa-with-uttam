#include <iostream>

using namespace std;

// Sum of the digits of n (n >= 0).
// n % 10 is the last digit, n / 10 is everything else.
int digitSum(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + digitSum(n / 10);
}

int main() {
    cout << "digitSum(1234) = " << digitSum(1234) << '\n';   // 10
    cout << "digitSum(9) = " << digitSum(9) << '\n';
    cout << "digitSum(0) = " << digitSum(0) << '\n';
    return 0;
}
