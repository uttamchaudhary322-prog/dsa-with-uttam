// 03 - nested loops: n*m, and the triangle n(n-1)/2 (still O(n^2))
#include <iostream>
using namespace std;

int main() {
    int n = 10, m = 5;
    int t = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) t++;                  // O(n*m)
    cout << t << "\n";                                    // 50

    int pairs = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) pairs++;          // n(n-1)/2
    cout << pairs << "\n";                                // 45

    int seq = 0;
    for (int i = 0; i < n; i++) seq++;                    // two loops one after
    for (int i = 0; i < n; i++) seq++;                    // another: n + n = O(n)
    cout << seq << "\n";                                  // 20
    return 0;
}
