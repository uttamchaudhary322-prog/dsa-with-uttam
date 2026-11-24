// 11 - MISTAKE: a hidden loop inside a loop (find on a vector)
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int n = 1000;
    vector<int> a(n);
    for (int i = 0; i < n; i++) a[i] = i;                 // all distinct

    long long compares = 0;
    vector<int> seen;
    for (int x : a) {
        for (int y : seen) { compares++; if (y == x) break; }   // find() is a loop!
        seen.push_back(x);
    }
    cout << "vector find: " << compares << " comparisons\n";    // 499500

    unordered_set<int> s;
    long long steps = 0;
    for (int x : a) { steps++; s.insert(x); }
    cout << "unordered_set: " << steps << " steps\n";             // 1000
    return 0;
}
