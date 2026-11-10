#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {3, 1, 4, 1, 5};

    // 1. Index loop: use size_t because size() is unsigned.
    for (size_t i = 0; i < v.size(); i++) {
        cout << "v[" << i << "] = " << v[i] << '\n';
    }

    // 2. Range-based for: read each value.
    for (int x : v) {
        cout << x << ' ';
    }
    cout << '\n';

    // 3. To change the elements, use a reference (&).
    for (int& x : v) {
        x = x * 2;
    }

    for (int x : v) {
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}
