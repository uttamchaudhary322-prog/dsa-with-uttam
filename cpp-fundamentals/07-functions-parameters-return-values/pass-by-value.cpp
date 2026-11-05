#include <iostream>

using namespace std;

void addOne(int x) {
    x++;   // changes only the copy
    cout << "Inside addOne: x = " << x << '\n';
}

int main() {
    int n = 5;
    addOne(n);
    cout << "Back in main: n = " << n << '\n';   // still 5
    return 0;
}
