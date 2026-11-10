#include <iostream>
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

    vector<int> v;
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int sum = 0;
    int largest = v[0];
    for (int x : v) {
        sum += x;
        if (x > largest) {
            largest = x;
        }
    }

    cout << "Count: " << v.size() << '\n';
    cout << "Sum: " << sum << '\n';
    cout << "Largest: " << largest << '\n';

    cout << "Reversed:";
    for (int i = n - 1; i >= 0; i--) {
        cout << ' ' << v[i];
    }
    cout << '\n';

    return 0;
}
