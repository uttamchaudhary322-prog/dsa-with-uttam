#include <iostream>
#include <vector>

using namespace std;

// Sum of v[i], v[i + 1], ... to the end.
int sumFrom(const vector<int>& v, int i) {
    if (i == (int)v.size()) {           // base case: no elements left
        return 0;
    }
    return v[i] + sumFrom(v, i + 1);    // this element + the rest
}

int main() {
    vector<int> v = {4, 9, -2, 7, 1};
    cout << "Sum: " << sumFrom(v, 0) << '\n';   // 19

    vector<int> empty;
    cout << "Sum of empty: " << sumFrom(empty, 0) << '\n';
    return 0;
}
