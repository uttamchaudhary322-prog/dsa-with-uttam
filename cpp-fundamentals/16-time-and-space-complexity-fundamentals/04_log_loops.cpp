// 04 - logarithmic loops: halving or doubling the problem
#include <iostream>
using namespace std;

int main() {
    int n = 1000000;

    int doubling = 0;
    for (long long i = 1; i < n; i *= 2) doubling++;
    cout << "doubling: " << doubling << "\n";             // 20

    int halving = 0;
    for (int x = n; x > 1; x /= 2) halving++;
    cout << "halving: " << halving << "\n";               // 19
    return 0;
}
