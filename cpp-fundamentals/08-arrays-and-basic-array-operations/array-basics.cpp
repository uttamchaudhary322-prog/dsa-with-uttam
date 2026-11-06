#include <iostream>

using namespace std;

int main() {
    int marks[5] = {80, 65, 90, 72, 55};   // 5 integers, stored one after another

    cout << "First element: " << marks[0] << '\n';   // indexes start at 0
    cout << "Third element: " << marks[2] << '\n';
    cout << "Last element: " << marks[4] << '\n';    // last index is size - 1

    marks[1] = 70;   // change one element
    cout << "After change: " << marks[1] << '\n';

    return 0;
}
