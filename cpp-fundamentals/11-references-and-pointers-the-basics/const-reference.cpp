#include <iostream>
#include <string>
#include <vector>

using namespace std;

// const & = "look at it, do not copy it, do not change it"
int sumOf(const vector<int>& v) {
    int total = 0;
    for (int x : v) {
        total += x;
    }
    return total;
}

void printLength(const string& s) {
    cout << "\"" << s << "\" has " << s.length() << " characters\n";
}

// A plain & lets the function change the caller's vector.
void doubleAll(vector<int>& v) {
    for (int& x : v) {
        x = x * 2;
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4};

    cout << "Sum: " << sumOf(v) << '\n';
    printLength("references");

    doubleAll(v);
    cout << "After doubleAll:";
    for (int x : v) {
        cout << ' ' << x;
    }
    cout << '\n';

    return 0;
}
