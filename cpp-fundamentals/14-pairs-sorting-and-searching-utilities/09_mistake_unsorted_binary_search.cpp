// 09 - MISTAKE: binary_search on unsorted data (hook example)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {9, 7, 3, 1};     // descending! default binary_search expects ascending
    cout << "7 present? " << binary_search(v.begin(), v.end(), 7) << "\n";   // 0 (wrong!)

    sort(v.begin(), v.end());          // FIX: sort first
    cout << "after sort: " << binary_search(v.begin(), v.end(), 7) << "\n";  // 1

    // or keep descending and tell it so:
    vector<int> d = {9, 7, 3, 1};
    cout << "with greater: " << binary_search(d.begin(), d.end(), 7, greater<int>()) << "\n";
    return 0;
}
