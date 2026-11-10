#include <iostream>
#include <vector>

using namespace std;

void show(const vector<int>& v) {
    for (int x : v) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main() {
    vector<int> v = {10, 20, 30, 40};

    v.insert(v.begin() + 1, 15);   // insert 15 at index 1
    show(v);                        // 10 15 20 30 40

    v.erase(v.begin());             // remove index 0
    show(v);                        // 15 20 30 40

    v.erase(v.begin() + 2);         // remove index 2
    show(v);                        // 15 20 40

    return 0;
}
