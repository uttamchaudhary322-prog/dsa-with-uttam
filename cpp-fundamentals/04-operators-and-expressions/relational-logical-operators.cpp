#include <iostream>

using namespace std;

int main() {
    // Relational operators produce true (printed as 1) or false (printed as 0).
    int a = 5, b = 3;
    cout << "a > b:  " << (a > b) << '\n';
    cout << "a == b: " << (a == b) << '\n';
    cout << "a != b: " << (a != b) << '\n';

    // Logical operators combine conditions.
    int age = 20;
    bool ok = (age >= 18 && age <= 60);
    cout << "ok:            " << ok << '\n';
    cout << "!ok:           " << !ok << '\n';
    cout << "outside range: " << (age < 18 || age > 60) << '\n';

    // Short-circuit evaluation: the right side of && is skipped when the left side is false.
    int x = 0;
    bool left = false;
    bool result = left && (++x > 0);
    cout << "result = " << result << ", x = " << x << '\n';

    return 0;
}
