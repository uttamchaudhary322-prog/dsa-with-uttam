// 10 - MISTAKE: m[key] CREATES the key when it is missing (hook example)
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> m;
    cout << m["apple"] << " " << m.size() << "\n";      // 0 1  (apple was created!)

    unordered_map<string, int> n;
    cout << n.count("apple") << " " << n.size() << "\n";   // 0 0  (count never inserts)

    if (n.find("apple") == n.end()) cout << "missing\n";   // safe lookup
    return 0;
}
