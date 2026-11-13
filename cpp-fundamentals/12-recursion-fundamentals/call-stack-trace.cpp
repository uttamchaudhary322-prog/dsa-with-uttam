#include <iostream>
#include <string>

using namespace std;

// Prints every call and every return, indented by depth,
// so you can SEE the call stack grow and shrink.
int factorial(int n, int depth) {
    string pad(depth * 2, ' ');
    cout << pad << "call   factorial(" << n << ")\n";

    int result;
    if (n <= 1) {
        result = 1;
    } else {
        result = n * factorial(n - 1, depth + 1);
    }

    cout << pad << "return factorial(" << n << ") = " << result << '\n';
    return result;
}

int main() {
    factorial(3, 0);
    return 0;
}
