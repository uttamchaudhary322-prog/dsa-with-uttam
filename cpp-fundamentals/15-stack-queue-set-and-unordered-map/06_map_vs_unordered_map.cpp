// 06 - map is sorted (O(log n)); unordered_map has no guaranteed order (O(1) average)
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m["pear"] = 1; m["apple"] = 2; m["mango"] = 3;
    for (auto &[k, v] : m) cout << k << "=" << v << " ";   // sorted by key
    cout << "\n";
    cout << m.begin()->first << " " << m.rbegin()->first << "\n";   // apple pear
    return 0;
}
