#include <iostream>

using namespace std;

int main() {
    // Part 1: no break after case 1 and case 2, so execution falls through.
    // [[fallthrough]]; (C++17) tells the compiler and the reader this is on purpose.
    int n = 2;
    switch (n) {
        case 1: cout << "One\n";
                [[fallthrough]];
        case 2: cout << "Two\n";
                [[fallthrough]];
        case 3: cout << "Three\n"; break;
        default: cout << "Other\n";
    }

    // Part 2: grouping cases. Several labels can share one block of code.
    char grade = 'B';
    switch (grade) {
        case 'A':
        case 'B':
        case 'C': cout << "Passed\n"; break;
        case 'F': cout << "Failed\n"; break;
        default: cout << "Invalid grade\n";
    }

    return 0;
}
