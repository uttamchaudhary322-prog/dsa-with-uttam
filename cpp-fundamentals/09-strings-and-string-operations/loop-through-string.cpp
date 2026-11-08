#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s;

    // Loop with an index.
    cout << "Characters: ";
    for (size_t i = 0; i < s.length(); i++) {
        cout << s[i] << ' ';
    }
    cout << '\n';

    // Loop without an index (range-based for).
    int vowels = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels++;
        }
    }
    cout << "Vowels: " << vowels << '\n';

    return 0;
}
