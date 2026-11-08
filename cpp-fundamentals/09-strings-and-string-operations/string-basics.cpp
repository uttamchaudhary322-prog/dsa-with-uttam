#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "Uttam";

    cout << "Name: " << name << '\n';
    cout << "Length: " << name.length() << '\n';
    cout << "First character: " << name[0] << '\n';                    // indexes start at 0
    cout << "Last character: " << name[name.length() - 1] << '\n';    // last index is length - 1

    name[0] = 'u';   // strings can be changed
    cout << "After change: " << name << '\n';

    string empty;    // an empty string
    cout << "Is empty? " << (empty.empty() ? "yes" : "no") << '\n';

    return 0;
}
