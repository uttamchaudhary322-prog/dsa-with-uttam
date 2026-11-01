#include <iostream>

using namespace std;

int main() {
    int r1 = 2 + 3 * 4;      // * runs before +
    int r2 = (2 + 3) * 4;    // parentheses run first
    int r3 = 10 - 4 - 3;     // same precedence: left to right
    int r4 = 7 / 2 * 2;      // (7 / 2) * 2 with integer division
    bool t = 5 > 3 && 2 + 2 == 4;

    cout << "2 + 3 * 4 = " << r1 << '\n';
    cout << "(2 + 3) * 4 = " << r2 << '\n';
    cout << "10 - 4 - 3 = " << r3 << '\n';
    cout << "7 / 2 * 2 = " << r4 << '\n';
    cout << "5 > 3 && 2 + 2 == 4 -> " << t << '\n';

    // << binds tighter than >, so a comparison inside cout needs parentheses.
    cout << "(5 > 3) = " << (5 > 3) << '\n';

    return 0;
}
