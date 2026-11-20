#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4};
    cout << "Sum of ints: " << accumulate(a.begin(), a.end(), 0) << '\n';        // 10

    // The LAST argument sets the start value AND the type of the result.
    vector<double> d = {0.5, 1.5, 2.5};
    cout << "With 0:   " << accumulate(d.begin(), d.end(), 0) << '\n';           // 3   (int math!)
    cout << "With 0.0: " << accumulate(d.begin(), d.end(), 0.0) << '\n';         // 4.5

    // Big sums need a long long start value.
    vector<int> big = {2000000000, 2000000000, 2000000000};
    cout << "Big sum: " << accumulate(big.begin(), big.end(), 0LL) << '\n';      // 6000000000

    return 0;
}
