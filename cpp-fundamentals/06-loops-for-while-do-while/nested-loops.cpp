#include <iostream>

using namespace std;

int main() {
    int rows;
    cout << "Enter rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << '\n';
    }

    return 0;
}
