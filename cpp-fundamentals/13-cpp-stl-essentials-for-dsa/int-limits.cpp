#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "INT_MAX:   " << INT_MAX << '\n';
    cout << "INT_MIN:   " << INT_MIN << '\n';
    cout << "LLONG_MAX: " << LLONG_MAX << '\n';

    // Handy as a starting value when you search for a smallest or largest number.
    vector<int> v = {7, 3, 9, 5};
    int smallest = INT_MAX;     // any real value is smaller
    int largest = INT_MIN;      // any real value is larger
    for (int x : v) {
        if (x < smallest) smallest = x;
        if (x > largest) largest = x;
    }
    cout << "Smallest: " << smallest << ", largest: " << largest << '\n';

    // INT_MAX + 1 overflows an int. Use long long for the arithmetic.
    long long bigger = (long long)INT_MAX + 1;
    cout << "INT_MAX + 1 as long long: " << bigger << '\n';

    return 0;
}
