#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& s, int left, int right) {
    if (left >= right) {                // nothing left to compare
        return true;
    }
    if (s[left] != s[right]) {          // mismatch: stop early
        return false;
    }
    return isPalindrome(s, left + 1, right - 1);
}

int main() {
    string words[] = {"madam", "level", "hello", "a", ""};
    for (const string& w : words) {
        cout << "\"" << w << "\" -> "
             << (isPalindrome(w, 0, (int)w.size() - 1) ? "palindrome" : "not a palindrome")
             << '\n';
    }
    return 0;
}
