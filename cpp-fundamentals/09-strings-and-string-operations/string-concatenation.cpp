#include <iostream>
#include <string>

using namespace std;

int main() {
    string first, last;
    cout << "Enter first name and last name: ";
    cin >> first >> last;

    string full = first + " " + last;   // + joins strings
    cout << "Full name: " << full << '\n';

    full += "!";                        // += adds to the end
    cout << "With !: " << full << '\n';

    full.push_back('?');                // add one character
    cout << "With ?: " << full << '\n';

    full.pop_back();                    // remove the last character
    cout << "After pop_back: " << full << '\n';

    return 0;
}
