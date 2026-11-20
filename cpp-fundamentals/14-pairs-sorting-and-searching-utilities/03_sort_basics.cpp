// 03 - sort ascending and descending
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1, 7};
    sort(v.begin(), v.end());                   // ascending
    for (int x : v) cout << x << " ";
    cout << "\n";

    sort(v.begin(), v.end(), greater<int>());   // descending
    for (int x : v) cout << x << " ";
    cout << "\n";

    sort(v.rbegin(), v.rend());                 // trick: ascending via reverse iterators = descending
    for (int x : v) cout << x << " ";
    cout << "\n";

    int arr[5] = {4, 3, 5, 1, 2};
    sort(arr, arr + 5);                         // works on plain arrays too
    for (int x : arr) cout << x << " ";
    cout << "\n";
    return 0;
}
