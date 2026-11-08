#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cout << "Enter one word: ";
    cin >> word;                       // stops at the first space
    cout << "Word: " << word << '\n';

    cin.ignore(1000, '\n');            // throw away the leftover Enter key

    string line;
    cout << "Enter a full line: ";
    getline(cin, line);                // reads everything up to Enter, spaces included
    cout << "Line: " << line << '\n';

    return 0;
}
