// 04 - custom comparator with a lambda
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<pair<string,int>> s = {{"Asha",82},{"Ravi",91},{"Meera",82},{"Kunal",70}};

    // marks descending, tie -> name ascending
    sort(s.begin(), s.end(), [](const auto &a, const auto &b) {
        if (a.second != b.second) return a.second > b.second;
        return a.first < b.first;
    });
    for (auto &[n, m] : s) cout << n << " " << m << "\n";

    vector<string> w = {"pear", "fig", "banana", "kiwi"};
    sort(w.begin(), w.end(), [](const string &a, const string &b) {
        return a.size() < b.size();            // by length
    });
    for (auto &x : w) cout << x << " ";
    cout << "\n";
    return 0;
}
