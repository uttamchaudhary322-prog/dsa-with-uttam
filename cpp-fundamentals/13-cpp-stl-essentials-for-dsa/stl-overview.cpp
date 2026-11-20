#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    // 1. A container holds the data.
    vector<int> v = {4, 9, 2, 7};

    // 2. Iterators point at positions inside it.
    auto first = v.begin();
    cout << "First element: " << *first << '\n';

    // 3. Algorithms work on a range of iterators: [begin, end)
    cout << "Largest: " << *max_element(v.begin(), v.end()) << '\n';
    cout << "Sum: " << accumulate(v.begin(), v.end(), 0) << '\n';

    reverse(v.begin(), v.end());
    cout << "Reversed:";
    for (int x : v) {
        cout << ' ' << x;
    }
    cout << '\n';

    return 0;
}
