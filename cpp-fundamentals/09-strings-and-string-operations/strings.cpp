#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s;

    string rev = "";
    for (int i = (int)s.length() - 1; i >= 0; i--) {
        rev += s[i];                      // build the reversed string
    }

    cout << "Length: " << s.length() << '\n';
    cout << "Reversed: " << rev << '\n';

    if (s == rev) {
        cout << "Palindrome\n";
    } else {
        cout << "Not a palindrome\n";
    }

    return 0;
}
