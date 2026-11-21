// 02 - queue: First In, First Out (FIFO)
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.front() << " " << q.back() << "\n";   // 10 30
    q.pop();                                        // removes 10
    cout << q.front() << " " << q.size() << "\n";   // 20 2

    while (!q.empty()) { cout << q.front() << " "; q.pop(); }
    cout << "\n";                                   // 20 30
    return 0;
}
