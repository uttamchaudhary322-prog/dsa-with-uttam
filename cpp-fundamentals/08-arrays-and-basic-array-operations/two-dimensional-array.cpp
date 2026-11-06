#include <iostream>

using namespace std;

int main() {
    // 2 rows and 3 columns
    int grid[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "grid[1][2] = " << grid[1][2] << '\n';   // row 1, column 2

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << grid[row][col] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
