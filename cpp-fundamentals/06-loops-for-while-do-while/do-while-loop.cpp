#include <iostream>

using namespace std;

int main() {
    // Part 1: a do-while loop always runs its body at least once.
    int n = 10;

    while (n < 5) {
        cout << "while: never runs\n";
    }

    do {
        cout << "do-while: runs once\n";
    } while (n < 5);   // do not forget this semicolon

    // Part 2: count the digits of a number. 0 has one digit, so the body must run once.
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int digits = 0;
    do {
        digits++;
        number /= 10;
    } while (number != 0);

    cout << "Digits: " << digits << '\n';

    return 0;
}
