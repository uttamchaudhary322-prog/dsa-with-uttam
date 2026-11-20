// 07 - remove duplicates: sort + unique + erase
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 1, 4, 2, 1, 3, 3};
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int x : v) cout << x << " ";
    cout << "\n";
    return 0;
}
