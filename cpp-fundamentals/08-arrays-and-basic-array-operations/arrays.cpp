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

    int sum = 0;
    int largest = arr[0];
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Sum: " << sum << '\n';
    cout << "Largest: " << largest << '\n';

    return 0;
}
