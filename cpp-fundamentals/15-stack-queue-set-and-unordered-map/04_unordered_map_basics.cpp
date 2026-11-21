// 04 - unordered_map: key -> value, average O(1)
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> m;
    m["apple"] = 3;
    m["mango"] = 5;
    m["apple"] += 2;                                // update
    cout << m["apple"] << "\n";                     // 5

    cout << m.count("mango") << m.count("kiwi") << "\n";   // 10
    auto it = m.find("mango");
    if (it != m.end()) cout << it->first << "=" << it->second << "\n";

    m.erase("mango");
    cout << m.size() << "\n";                       // 1

    for (auto &[k, v] : m) cout << k << ":" << v << "\n";
    return 0;
}
