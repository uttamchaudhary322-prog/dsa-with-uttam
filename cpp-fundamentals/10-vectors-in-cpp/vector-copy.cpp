#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = a;    // b is a separate copy

    b[0] = 99;
    b.push_back(4);

    cout << "a:";
    for (int x : a) cout << ' ' << x;
    cout << '\n';

    cout << "b:";
    for (int x : b) cout << ' ' << x;
    cout << '\n';

    cout << "Same? " << (a == b) << '\n';   // vectors can be compared with ==

    return 0;
}
