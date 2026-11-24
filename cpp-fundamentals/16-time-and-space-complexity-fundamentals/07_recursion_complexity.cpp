// 07 - naive fib is exponential; memoization makes it linear
#include <iostream>
#include <vector>
using namespace std;

long long calls = 0;
long long fib(int n) {
    calls++;
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);                       // ~O(2^n)
}

long long memoCalls = 0;
long long fibMemo(int n, vector<long long> &m) {
    memoCalls++;
    if (n <= 1) return n;
    if (m[n] != -1) return m[n];
    return m[n] = fibMemo(n - 1, m) + fibMemo(n - 2, m);  // O(n)
}

int main() {
    cout << fib(25) << " in " << calls << " calls\n";      // 75025 in 242785 calls
    vector<long long> m(26, -1);
    cout << fibMemo(25, m) << " in " << memoCalls << " calls\n";   // 75025 in 49 calls
    return 0;
}
