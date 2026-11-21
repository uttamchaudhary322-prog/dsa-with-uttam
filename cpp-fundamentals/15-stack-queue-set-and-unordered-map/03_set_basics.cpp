// 03 - set: unique values, always sorted
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(5); s.insert(1); s.insert(5); s.insert(3);
    for (int x : s) cout << x << " ";               // 1 3 5
    cout << "\n";
    cout << s.size() << "\n";                       // 3 (duplicate ignored)
    cout << s.count(3) << s.count(4) << "\n";       // 10
    s.erase(3);

    auto it = s.find(5);
    if (it != s.end()) cout << "found " << *it << "\n";

    auto lb = s.lower_bound(2);                     // first >= 2
    cout << *lb << "\n";                            // 5
    return 0;
}
