// 01 - count the steps: O(n), O(n^2), O(log n)
#include <iostream>
using namespace std;

int main() {
    int n = 1000;

    long long a = 0;
    for (int i = 0; i < n; i++) a++;                       // O(n)

    long long b = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) b++;                   // O(n^2)

    long long c = 0;
    for (int i = 1; i < n; i *= 2) c++;                    // O(log n)

    cout << a << " " << b << " " << c << "\n";             // 1000 1000000 10
    return 0;
}
