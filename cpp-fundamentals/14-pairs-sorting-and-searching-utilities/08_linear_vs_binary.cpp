// 08 - count steps: linear search vs binary search
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 1000000;
    vector<int> v(n);
    for (int i = 0; i < n; i++) v[i] = i * 2;
    int target = 1999998;                       // last element

    int steps = 0;
    for (int i = 0; i < n; i++) { steps++; if (v[i] == target) break; }
    cout << "linear steps: " << steps << "\n";

    steps = 0;
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        steps++;
        int mid = lo + (hi - lo) / 2;
        if (v[mid] == target) break;
        else if (v[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    cout << "binary steps: " << steps << "\n";
    return 0;
}
