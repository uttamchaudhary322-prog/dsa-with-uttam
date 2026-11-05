#include <iostream>

using namespace std;

void printLine() {
    cout << "--------\n";
}

void printStars(int n) {
    if (n <= 0) {
        return;   // a void function can leave early with a plain return;
    }
    for (int i = 0; i < n; i++) {
        cout << '*';
    }
    cout << '\n';
}

int main() {
    printLine();
    printStars(5);
    printStars(0);   // prints nothing
    printLine();
    return 0;
}
