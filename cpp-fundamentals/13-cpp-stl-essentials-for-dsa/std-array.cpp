#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

int main() {
    array<int, 5> a = {5, 3, 8, 1, 9};   // size is part of the type and fixed

    cout << "Size: " << a.size() << '\n';
    cout << "First: " << a[0] << ", last: " << a.back() << '\n';
    cout << "a.at(2) = " << a.at(2) << '\n';

    cout << "Largest: " << *max_element(a.begin(), a.end()) << '\n';

    reverse(a.begin(), a.end());          // same algorithms as a vector
    for (int x : a) {
        cout << x << ' ';
    }
    cout << '\n';

    array<int, 5> b = a;                  // unlike a C array, std::array can be copied
    b[0] = 100;
    cout << "a[0] = " << a[0] << ", b[0] = " << b[0] << '\n';

    return 0;
}
