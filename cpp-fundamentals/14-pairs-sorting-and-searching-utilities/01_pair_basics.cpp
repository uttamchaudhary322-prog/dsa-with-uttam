// 01 - pair basics: make_pair, first/second, comparison, structured bindings
#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    pair<string, int> p = {"Uttam", 95};
    cout << p.first << " scored " << p.second << "\n";

    auto q = make_pair(3, 7);          // pair<int,int>
    cout << q.first << "," << q.second << "\n";

    pair<int,int> a = {1, 9}, b = {1, 4}, c = {2, 0};
    cout << (a < c) << (b < a) << (a == b) << "\n";   // compares first, then second

    auto [name, marks] = p;            // C++17 structured binding
    cout << name << " -> " << marks << "\n";

    swap(a, b);
    cout << a.first << "," << a.second << "\n";
    return 0;
}
