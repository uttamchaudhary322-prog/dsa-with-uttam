#include <iostream>
#include <string>
#include <cctype>   // isalpha, isdigit, toupper, tolower

using namespace std;

int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s;

    string upper = s, lower = s;
    int letters = 0, digits = 0;

    for (size_t i = 0; i < s.length(); i++) {
        upper[i] = toupper(s[i]);
        lower[i] = tolower(s[i]);
        if (isalpha(s[i])) {
            letters++;
        } else if (isdigit(s[i])) {
            digits++;
        }
    }

    cout << "Upper: " << upper << '\n';
    cout << "Lower: " << lower << '\n';
    cout << "Letters: " << letters << ", digits: " << digits << '\n';

    return 0;
}
