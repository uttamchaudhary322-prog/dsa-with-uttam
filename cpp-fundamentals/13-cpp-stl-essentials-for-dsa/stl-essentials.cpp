#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0) {
        cout << "Nothing to do\n";
        return 0;
    }

    vector<int> v(n);
    cout << "Enter " << n << " numbers: ";
    for (int& x : v) {
        cin >> x;
    }

    auto smallest = min_element(v.begin(), v.end());
    auto largest = max_element(v.begin(), v.end());

    cout << "Sum: " << accumulate(v.begin(), v.end(), 0LL) << '\n';
    cout << "Smallest: " << *smallest << " at index " << smallest - v.begin() << '\n';
    cout << "Largest: " << *largest << " at index " << largest - v.begin() << '\n';
    cout << "Largest appears " << count(v.begin(), v.end(), *largest) << " time(s)\n";

    int target;
    cout << "Search for: ";
    cin >> target;
    auto it = find(v.begin(), v.end(), target);
    if (it != v.end()) {
        cout << target << " found at index " << it - v.begin() << '\n';
    } else {
        cout << target << " not found\n";
    }

    reverse(v.begin(), v.end());
    cout << "Reversed:";
    for (int x : v) {
        cout << ' ' << x;
    }
    cout << '\n';

    return 0;
}
