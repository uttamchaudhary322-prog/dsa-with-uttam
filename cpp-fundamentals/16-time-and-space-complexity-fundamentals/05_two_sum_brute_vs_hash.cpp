// 05 - Two Sum: brute force O(n^2) vs hash map O(n) (worst case: no answer)
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n = 2000;
    vector<int> a(n);
    for (int i = 0; i < n; i++) a[i] = i * 2;             // all even
    int target = 1;                                       // odd target: never found

    long long brute = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) { brute++; if (a[i] + a[j] == target) break; }

    long long hashed = 0;
    unordered_map<int,int> pos;
    for (int i = 0; i < n; i++) {
        hashed++;
        if (pos.count(target - a[i])) break;
        pos[a[i]] = i;
    }
    cout << "brute: " << brute << " checks\n";            // 1999000
    cout << "hash:  " << hashed << " steps\n";             // 2000
    return 0;
}
