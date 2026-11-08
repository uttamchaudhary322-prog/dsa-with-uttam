#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "hello world";

    cout << s.substr(0, 5) << '\n';   // substr(start, length): "hello"
    cout << s.substr(6) << '\n';      // from index 6 to the end: "world"

    size_t pos = s.find("world");     // index of the first match
    if (pos != string::npos) {        // npos means "not found"
        cout << "Found at index " << pos << '\n';
    } else {
        cout << "Not found\n";
    }

    if (s.find("xyz") == string::npos) {
        cout << "xyz is not in the string\n";
    }

    return 0;
}
