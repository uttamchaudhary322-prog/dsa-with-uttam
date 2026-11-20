#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {4, 9, 2, 9, 7};

    // count: how many times does a value appear?
    cout << "9 appears " << count(v.begin(), v.end(), 9) << " times\n";

    // find: returns an iterator to the FIRST match, or end() if not found.
    auto it = find(v.begin(), v.end(), 2);
    if (it != v.end()) {
        cout << "Found 2 at index " << it - v.begin() << '\n';
    }

    it = find(v.begin(), v.end(), 5);
    if (it == v.end()) {
        cout << "5 is not in the vector\n";
    }

    return 0;
}
