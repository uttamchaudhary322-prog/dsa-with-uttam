#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter the age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Adult\n";
    }

    if (age < 18) {
        cout << "Minor\n";   // skipped, because the condition is false
    }

    cout << "Done\n";
    return 0;
}
