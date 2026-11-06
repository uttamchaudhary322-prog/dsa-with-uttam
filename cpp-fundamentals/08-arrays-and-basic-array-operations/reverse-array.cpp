#include <iostream>

using namespace std;

int main() {
    const int MAX = 100;
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

    // Swap the first with the last, the second with the second last, and so on.
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "Reversed: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    return 0;
}
