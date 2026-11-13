#include <iostream>

using namespace std;

void countdown(int n) {
    if (n == 0) {               // base case: stop here
        cout << "Go!\n";
        return;
    }
    cout << n << ' ';
    countdown(n - 1);           // recursive case: a smaller problem
}

int main() {
    countdown(3);   // 3 2 1 Go!
    return 0;
}
