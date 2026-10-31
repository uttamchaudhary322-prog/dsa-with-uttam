#include <iostream>

using namespace std;

int main() {
    int first, second;

    cout << "Enter two integers: ";
    if (!(cin >> first >> second)) {
        cerr << "Invalid input\n";
        return 1;
    }

    cout << "Sum = " << first + second << '\n';
    return 0;
}
