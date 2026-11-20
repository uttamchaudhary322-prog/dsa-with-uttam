#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // min and max compare two values.
    cout << "min(3, 8) = " << min(3, 8) << '\n';
    cout << "max(3, 8) = " << max(3, 8) << '\n';

    vector<int> v = {4, 9, 2, 9, 7};

    // min_element / max_element search a range and return an ITERATOR.
    auto smallest = min_element(v.begin(), v.end());
    auto largest = max_element(v.begin(), v.end());

    cout << "Smallest value: " << *smallest << '\n';            // * gives the value
    cout << "Largest value: " << *largest << '\n';
    cout << "Index of smallest: " << smallest - v.begin() << '\n';   // - begin() gives the index
    cout << "Index of largest: " << largest - v.begin() << '\n';     // the FIRST 9

    // Always check that the vector is not empty first.
    vector<int> empty;
    if (!empty.empty()) {
        cout << *max_element(empty.begin(), empty.end()) << '\n';
    }

    return 0;
}
