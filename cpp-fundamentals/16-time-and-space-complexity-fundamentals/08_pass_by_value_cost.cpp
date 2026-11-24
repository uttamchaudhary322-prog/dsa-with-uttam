// 08 - hidden cost: passing big objects by value copies them every call
#include <iostream>
#include <vector>
using namespace std;

long long total(vector<int> v)        { return v.empty() ? 0 : v[0]; }   // copies: O(n) per call
long long totalRef(const vector<int> &v) { return v.empty() ? 0 : v[0]; } // no copy: O(1)

int main() {
    vector<int> v(1000000, 7);
    long long s = 0;
    for (int i = 0; i < 100; i++) s += totalRef(v);       // fast
    cout << s << "\n";                                    // 700
    // total(v) 100 times would copy 100 * 1,000,000 ints
    cout << "copied bytes if by value: " << 100LL * v.size() * sizeof(int) << "\n";   // 400000000
    return 0;
}
