// 01 - stack: Last In, First Out (LIFO)
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << "\n";      // 3 (peek, does not remove)
    s.pop();                      // removes 3, returns nothing (void)
    cout << s.top() << "\n";      // 2
    cout << s.size() << " " << s.empty() << "\n";   // 2 0

    while (!s.empty()) { cout << s.top() << " "; s.pop(); }
    cout << "\n";                 // 2 1
    return 0;
}
