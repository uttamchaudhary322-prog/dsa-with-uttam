#include <iostream>

using namespace std;

int add(int a, int b) { return a + b; }
int larger(int a, int b) { return (a > b) ? a : b; }
bool isEven(int n) { return n % 2 == 0; }

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Sum: " << add(x, y) << '\n';
    cout << "Larger: " << larger(x, y) << '\n';
    cout << "x is " << (isEven(x) ? "even" : "odd") << '\n';
    return 0;
}
