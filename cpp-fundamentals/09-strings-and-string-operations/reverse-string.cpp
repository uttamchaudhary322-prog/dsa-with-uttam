#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s;

    int n = s.length();

    // Swap the first with the last, the second with the second last, and so on.
    for (int i = 0; i < n / 2; i++) {
        char temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }

    cout << "Reversed: " << s << '\n';

    return 0;
}
