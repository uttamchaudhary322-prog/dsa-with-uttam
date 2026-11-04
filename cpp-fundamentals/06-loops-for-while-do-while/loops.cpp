#include <iostream>

using namespace std;

int main() {
    int n;

    do {
        cout << "Enter a positive number: ";
        cin >> n;
    } while (n <= 0);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum: " << sum << '\n';
    return 0;
}
