#include <iostream>

using namespace std;

int main() {
    // Part 1: count from 1 to n
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        cout << i << ' ';
        i++;   // without this update, the loop would never end
    }
    cout << '\n';

    // Part 2: add numbers until the user enters 0
    int x, sum = 0;
    cout << "Enter numbers (0 to stop): ";
    cin >> x;
    while (x != 0) {
        sum += x;
        cin >> x;
    }
    cout << "Sum: " << sum << '\n';

    return 0;
}
