#include <iostream>

using namespace std;

// sum(n) = n + sum(n - 1)
int sumTo(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumTo(n - 1);
}

int main() {
    cout << "sumTo(4) = " << sumTo(4) << '\n';     // 4 + 3 + 2 + 1 = 10
    cout << "sumTo(100) = " << sumTo(100) << '\n';
    return 0;
}
