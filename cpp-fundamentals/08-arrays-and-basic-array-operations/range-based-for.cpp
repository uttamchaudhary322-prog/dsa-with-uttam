#include <iostream>

using namespace std;

int main() {
    int arr[5] = {3, 1, 4, 1, 5};

    // Read every element, without an index.
    cout << "Elements: ";
    for (int x : arr) {
        cout << x << ' ';
    }
    cout << '\n';

    // Use a reference (&) to change the elements.
    for (int& x : arr) {
        x += 10;
    }

    cout << "After adding 10: ";
    for (int x : arr) {
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}
