// 10 - comparator must be STRICT: use < not <=   (<= can crash / UB)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {3, 1, 2, 3, 1};
    // WRONG (undefined behaviour with equal elements):
    // sort(v.begin(), v.end(), [](int a, int b){ return a <= b; });

    sort(v.begin(), v.end(), [](int a, int b) { return a < b; });   // RIGHT
    for (int x : v) cout << x << " ";
    cout << "\n";
    return 0;
}
