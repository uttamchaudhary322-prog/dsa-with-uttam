#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    cout << "Size: " << v.size() << '\n';
    cout << "First: " << v[0] << '\n';
    cout << "Last: " << v[v.size() - 1] << '\n';

    v[1] = 25;   // change an element, just like an array
    cout << "After change: " << v[0] << ' ' << v[1] << ' ' << v[2] << '\n';

    vector<int> empty;
    cout << "Is empty? " << empty.empty() << '\n';   // 1 means true

    return 0;
}
