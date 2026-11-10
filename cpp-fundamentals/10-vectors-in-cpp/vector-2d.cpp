#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows = 3, cols = 4;

    // rows vectors, each one is a vector of `cols` zeros
    vector<vector<int>> grid(rows, vector<int>(cols, 0));

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            grid[r][c] = r * cols + c;
        }
    }

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << grid[r][c] << '\t';
        }
        cout << '\n';
    }

    return 0;
}
