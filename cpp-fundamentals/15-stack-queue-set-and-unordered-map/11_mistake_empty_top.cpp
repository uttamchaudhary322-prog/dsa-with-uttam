// 11 - MISTAKE: top()/front() on an empty container is undefined behaviour
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    stack<int> s;
    // cout << s.top();           // WRONG: crash / garbage
    if (!s.empty()) cout << s.top();
    else cout << "stack empty\n";

    queue<int> q;
    if (!q.empty()) cout << q.front();
    else cout << "queue empty\n";

    s.push(7);
    int x = s.top(); s.pop();       // pop() returns void: read top() FIRST
    cout << x << "\n";              // 7
    return 0;
}
