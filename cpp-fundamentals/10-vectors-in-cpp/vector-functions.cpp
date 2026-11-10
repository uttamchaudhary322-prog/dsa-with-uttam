#include <iostream>
#include <vector>

using namespace std;

// const vector<int>& means: use the vector without copying it and without changing it.
// (The & is explained properly in lesson 11.)
int sumOf(const vector<int>& v) {
    int total = 0;
    for (int x : v) {
        total += x;
    }
    return total;
}

// A function can also build and return a vector.
vector<int> squares(int n) {
    vector<int> result;
    for (int i = 1; i <= n; i++) {
        result.push_back(i * i);
    }
    return result;
}

int main() {
    vector<int> s = squares(5);

    for (int x : s) {
        cout << x << ' ';
    }
    cout << '\n';
    cout << "Sum: " << sumOf(s) << '\n';

    return 0;
}
