// 02 - vector<pair<>> : store (value, index) / (name, marks)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<pair<string,int>> v;
    v.push_back({"Asha", 82});
    v.push_back({"Ravi", 91});
    v.emplace_back("Meera", 76);

    for (auto &p : v) cout << p.first << ":" << p.second << " ";
    cout << "\n";
    for (auto &[n, m] : v) cout << n << "=" << m << " ";
    cout << "\n";
    return 0;
}
