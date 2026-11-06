#include <iostream>

using namespace std;

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n, target;

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

    cout << "Enter the number to find: ";
    cin >> target;

    int index = -1;   // -1 means "not found"
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;    // stop at the first match
        }
    }

    if (index == -1) {
        cout << "Not found\n";
    } else {
        cout << "Found at index " << index << '\n';
    }

    return 0;
}
