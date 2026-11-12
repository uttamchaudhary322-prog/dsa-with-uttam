#include <iostream>

using namespace std;

int main() {
    int* p = nullptr;   // points to nothing

    if (p == nullptr) {
        cout << "p points to nothing, so it is NOT safe to use *p\n";
    }

    int x = 42;
    p = &x;

    if (p != nullptr) {
        cout << "Now it is safe: *p = " << *p << '\n';
    }

    // Reading *p while p is nullptr would crash the program.
    return 0;
}
