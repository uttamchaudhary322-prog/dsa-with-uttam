#include <iostream>

using namespace std;

// An array is passed without its size, so we pass the size as a second parameter.
// The function works on the ORIGINAL array, not a copy.
void doubleAll(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }
}

int sumOf(const int arr[], int n) {   // const: this function only reads the array
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);   // 5 (works here, where arr is a real array)

    cout << "Sum before: " << sumOf(arr, n) << '\n';
    doubleAll(arr, n);
    cout << "Sum after doubling: " << sumOf(arr, n) << '\n';

    cout << "Array now: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    return 0;
}
