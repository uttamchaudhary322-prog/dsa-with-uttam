// 05 - sort values but remember original positions (very common in DSA)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {40, 10, 30, 20};
    vector<pair<int,int>> v;                    // (value, original index)
    for (int i = 0; i < (int)a.size(); i++) v.push_back({a[i], i});

    sort(v.begin(), v.end());
    for (auto &[val, idx] : v) cout << val << "@" << idx << " ";
    cout << "\n";
    return 0;
}
