#include <iostream>

using namespace std;

int main() {
    // Count down
    for (int i = 5; i >= 1; i--) {
        cout << i << ' ';
    }
    cout << '\n';

    // Step by 2
    for (int i = 0; i <= 10; i += 2) {
        cout << i << ' ';
    }
    cout << '\n';

    // Add the numbers from 1 to 5
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << '\n';

    return 0;
}
