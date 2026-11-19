#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void show(const vector<int>& v) {
    for (int x : v) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    reverse(v.begin(), v.end());              // whole vector
    show(v);                                   // 5 4 3 2 1

    reverse(v.begin(), v.begin() + 2);        // only the first two
    show(v);                                   // 4 5 3 2 1

    swap(v[0], v[4]);                         // swap two values
    show(v);                                   // 1 5 3 2 4

    fill(v.begin(), v.end(), 0);              // set every element
    show(v);                                   // 0 0 0 0 0

    vector<int> zeros(5, 0);                  // another way to make 5 zeros
    show(zeros);

    return 0;
}
