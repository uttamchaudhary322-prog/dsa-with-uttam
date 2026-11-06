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

    int largest = arr[0];    // start with the first element, not with 0
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Largest: " << largest << '\n';
    cout << "Smallest: " << smallest << '\n';

    return 0;
}
