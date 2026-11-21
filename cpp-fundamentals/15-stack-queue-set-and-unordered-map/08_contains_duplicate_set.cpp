// 08 - set for fast "have I seen this?" checks
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool hasDuplicate(const vector<int> &a) {
    unordered_set<int> seen;
    for (int x : a) {
        if (seen.count(x)) return true;
        seen.insert(x);
    }
    return false;
}

int main() {
    cout << hasDuplicate({1, 2, 3, 1}) << hasDuplicate({1, 2, 3}) << "\n";   // 10
    return 0;
}
