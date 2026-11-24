// 06 - space complexity: O(1) extra vs O(n) extra
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 1000000;
    vector<int> v(n, 1);

    long long sum = 0;                                    // O(1) extra space
    for (int x : v) sum += x;
    cout << sum << "\n";

    vector<int> copy = v;                                 // O(n) extra space
    cout << copy.size() * sizeof(int) << " bytes\n";      // 4000000 bytes

    reverse(v.begin(), v.end());                          // in place: O(1) extra
    return 0;
}
