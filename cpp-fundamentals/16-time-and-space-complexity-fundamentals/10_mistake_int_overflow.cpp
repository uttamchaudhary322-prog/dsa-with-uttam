// 10 - MISTAKE: n*n does not fit in int when n = 100000
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n = 100000;
    long long right = (long long)n * n;                   // cast BEFORE multiplying
    cout << right << "\n";                                // 10000000000
    cout << (right > INT_MAX) << "\n";                    // 1: too big for int
    cout << INT_MAX << "\n";                              // 2147483647
    return 0;
}
