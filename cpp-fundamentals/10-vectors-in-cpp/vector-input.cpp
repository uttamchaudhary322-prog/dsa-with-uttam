#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    vector<int> v;
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "You entered:";
    for (int x : v) {
        cout << ' ' << x;
    }
    cout << '\n';
    cout << "Count: " << v.size() << '\n';

    return 0;
}
