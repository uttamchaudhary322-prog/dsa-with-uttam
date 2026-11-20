#include <bits/stdc++.h>      // includes almost the whole standard library (GCC / Clang)

using namespace std;

using ll = long long;         // a short name for a type you type a lot

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int& x : v) {
        cin >> x;
    }

    ll sum = accumulate(v.begin(), v.end(), 0LL);
    cout << "Sum: " << sum << '\n';
    cout << "Max: " << *max_element(v.begin(), v.end()) << '\n';
}

int main() {
    ios::sync_with_stdio(false);   // faster input and output
    cin.tie(nullptr);

    solve();
    return 0;
}
