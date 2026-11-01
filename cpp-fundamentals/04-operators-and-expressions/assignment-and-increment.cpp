#include <iostream>

using namespace std;

int main() {
    // Compound assignment operators
    int x = 5;
    x += 3;
    cout << "after x += 3: " << x << '\n';
    x *= 2;
    cout << "after x *= 2: " << x << '\n';
    x -= 6;
    cout << "after x -= 6: " << x << '\n';
    x /= 3;
    cout << "after x /= 3: " << x << '\n';
    x %= 2;
    cout << "after x %= 2: " << x << '\n';

    // Postfix (y++) uses the value first. Prefix (++y) changes it first.
    int y = 5;
    cout << "y++ prints: " << y++ << '\n';
    cout << "y is now:   " << y << '\n';
    cout << "++y prints: " << ++y << '\n';

    return 0;
}
