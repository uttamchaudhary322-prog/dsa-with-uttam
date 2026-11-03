#include <iostream>

using namespace std;

int main() {
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A\n";
    } else if (marks >= 75) {
        cout << "Grade: B\n";
    } else if (marks >= 50) {
        cout << "Grade: C\n";
    } else {
        cout << "Grade: F\n";
    }

    return 0;
}
