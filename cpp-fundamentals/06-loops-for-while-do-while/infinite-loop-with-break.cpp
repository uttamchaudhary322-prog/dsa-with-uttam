#include <iostream>

using namespace std;

int main() {
    int n;

    // while (true) never ends on its own, so break is the only way out.
    while (true) {
        cout << "Enter a positive number: ";
        cin >> n;
        if (n > 0) {
            break;
        }
    }

    cout << "You entered " << n << '\n';
    return 0;
}
