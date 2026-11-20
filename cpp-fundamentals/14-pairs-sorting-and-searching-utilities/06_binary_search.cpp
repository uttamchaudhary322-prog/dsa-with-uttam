// 06 - binary_search / lower_bound / upper_bound (array MUST be sorted)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 3, 3, 3, 7, 9};
    cout << binary_search(v.begin(), v.end(), 7) << binary_search(v.begin(), v.end(), 4) << "\n";

    auto lo = lower_bound(v.begin(), v.end(), 3);   // first >= 3
    auto hi = upper_bound(v.begin(), v.end(), 3);   // first > 3
    cout << (lo - v.begin()) << " " << (hi - v.begin()) << "\n";
    cout << "count of 3 = " << (hi - lo) << "\n";

    auto it = lower_bound(v.begin(), v.end(), 8);   // first >= 8 -> 9
    cout << *it << " at " << (it - v.begin()) << "\n";

    auto e = lower_bound(v.begin(), v.end(), 100);  // not found -> end()
    cout << (e == v.end()) << "\n";
    return 0;
}
