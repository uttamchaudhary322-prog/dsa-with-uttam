#include <iostream>

using namespace std;

int counter = 0;   // global variable: visible everywhere (avoid when you can)

void increase() {
    int step = 1;   // local variable: exists only inside increase()
    counter += step;
}

int main() {
    int step = 10;   // a different variable, also called step

    increase();
    increase();

    cout << "counter = " << counter << '\n';
    cout << "step in main = " << step << '\n';
    return 0;
}
