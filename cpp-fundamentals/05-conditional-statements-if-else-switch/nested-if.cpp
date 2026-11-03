#include <iostream>

using namespace std;

int main() {
    int age = 20;
    bool hasId = true;

    // Nested if: the inner if runs only when the outer condition is true.
    if (age >= 18) {
        if (hasId) {
            cout << "Nested: Entry allowed\n";
        }
    }

    // The same logic with &&. Flat code is usually easier to read.
    if (age >= 18 && hasId) {
        cout << "Combined: Entry allowed\n";
    }

    return 0;
}
