// 02 - same answer, different cost: sum of 1..n
#include <iostream>
using namespace std;

int main() {
    long long n = 1000000;

    long long s = 0, steps = 0;
    for (long long i = 1; i <= n; i++) { s += i; steps++; }   // O(n)
    cout << s << " in " << steps << " steps\n";

    long long f = n * (n + 1) / 2;                            // O(1)
    cout << f << " in 1 step\n";
    return 0;
}
