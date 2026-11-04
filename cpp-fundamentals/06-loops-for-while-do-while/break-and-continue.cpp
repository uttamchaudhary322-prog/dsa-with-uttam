#include <iostream>

using namespace std;

int main() {
    cout << "break:    ";
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;      // leave the loop completely
        }
        cout << i << ' ';
    }
    cout << '\n';

    cout << "continue: ";
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;   // skip the rest of this round
        }
        cout << i << ' ';
    }
    cout << '\n';

    return 0;
}
