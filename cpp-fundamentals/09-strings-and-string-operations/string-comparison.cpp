#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cout << "Enter two words: ";
    cin >> a >> b;

    if (a == b) {
        cout << "Same\n";
    } else {
        cout << "Different\n";
    }

    // < and > compare letter by letter (dictionary order, by ASCII value)
    if (a < b) {
        cout << a << " comes before " << b << '\n';
    } else if (a > b) {
        cout << a << " comes after " << b << '\n';
    }

    return 0;
}
