#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();

    // Swap the first with the last, the second with the second last, and so on.
    for (int i = 0; i < n / 2; i++) {
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }

    for (int x : v) {
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}
