#include <iostream>
#include <vector>

using namespace std;

void show(const char* label, const vector<int>& v) {
    cout << label << " (size " << v.size() << "):";
    for (int x : v) {
        cout << ' ' << x;
    }
    cout << '\n';
}

int main() {
    vector<int> a;                 // empty
    vector<int> b = {4, 5, 6};     // with values
    vector<int> c(5);              // 5 elements, all 0
    vector<int> d(5, 7);           // 5 elements, all 7
    vector<int> e{3};              // ONE element: 3 (curly braces list values)
    vector<int> f(3);              // THREE elements: 0 0 0 (round brackets give a size)

    show("a", a);
    show("b", b);
    show("c", c);
    show("d", d);
    show("e", e);
    show("f", f);

    return 0;
}
