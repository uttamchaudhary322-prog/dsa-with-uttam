#include <iostream>

using namespace std;

int main() {
    const int MAX = 100;   // the array can hold up to 100 numbers
    int arr[MAX];
    int n;

    cout << "How many numbers (1 to " << MAX << ")? ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid size\n";
        return 0;
    }

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    return 0;
}
