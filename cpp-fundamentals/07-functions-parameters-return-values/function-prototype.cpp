#include <iostream>

using namespace std;

int add(int a, int b);   // declaration (prototype): tells the compiler add exists

int main() {
    cout << add(3, 4) << '\n';
    return 0;
}

int add(int a, int b) {   // definition: the actual code
    return a + b;
}
