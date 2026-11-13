#include <iostream>
#include <string>

using namespace std;

// Reverse s in place: swap the ends, then solve the smaller middle part.
void reverseRange(string& s, int left, int right) {
    if (left >= right) {                // base case: 0 or 1 character left
        return;
    }
    swap(s[left], s[right]);
    reverseRange(s, left + 1, right - 1);
}

int main() {
    string s = "recursion";
    reverseRange(s, 0, (int)s.size() - 1);
    cout << s << '\n';                  // noisrucer
    return 0;
}
