// 11 - mini problem: two-sum with sort + indexes (two pointers)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {8, 2, 11, 7};
    int target = 9;
    vector<pair<int,int>> v;
    for (int i = 0; i < (int)a.size(); i++) v.push_back({a[i], i});
    sort(v.begin(), v.end());

    int l = 0, r = (int)v.size() - 1;
    while (l < r) {
        int s = v[l].first + v[r].first;
        if (s == target) { cout << v[l].second << " " << v[r].second << "\n"; return 0; }
        s < target ? l++ : r--;
    }
    cout << "none\n";
    return 0;
}
