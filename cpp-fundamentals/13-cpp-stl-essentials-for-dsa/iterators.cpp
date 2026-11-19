#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    // begin() = the first element, end() = ONE PAST the last element.
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';        // * reads the element the iterator points at
    }
    cout << '\n';

    // auto lets the compiler write the long type for you.
    for (auto it = v.begin(); it != v.end(); it++) {
        *it = *it + 1;             // and * can change it too
    }

    for (auto it = v.rbegin(); it != v.rend(); it++) {   // r = reverse
        cout << *it << ' ';
    }
    cout << '\n';

    auto it = v.begin() + 2;       // iterators support + and -
    cout << "Element at position 2: " << *it << '\n';
    cout << "Index of it: " << it - v.begin() << '\n';

    // *v.end() would be undefined behavior: end() points past the last element.
    return 0;
}
