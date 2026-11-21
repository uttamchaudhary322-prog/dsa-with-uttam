// 09 - Two Sum in O(n) with unordered_map (value -> index)
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> a = {2, 7, 11, 15};
    int target = 9;
    unordered_map<int, int> pos;
    for (int i = 0; i < (int)a.size(); i++) {
        int need = target - a[i];
        auto it = pos.find(need);
        if (it != pos.end()) { cout << it->second << " " << i << "\n"; return 0; }
        pos[a[i]] = i;
    }
    cout << "none\n";
    return 0;
}
