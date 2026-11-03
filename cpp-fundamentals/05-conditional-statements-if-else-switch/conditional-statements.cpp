#include <iostream>

using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter the first number, operation, seconed number :";
    cin >> a >> op >> b;

    switch (op) {
        case '+': cout << a + b << '\n'; break;
        case '-': cout << a - b << '\n'; break;
        case '*': cout << a * b << '\n'; break;
        case '/':
            if (b != 0) cout << a / b << '\n';
            else cout << "Cannot divide by zero\n";
            break;
        default: cout << "Invalid operator\n";
    }

    return 0;
}
