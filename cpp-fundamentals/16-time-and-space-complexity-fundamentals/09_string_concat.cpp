// 09 - s = s + c copies the whole string each time; s += c does not
#include <iostream>
#include <string>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    int n = 100000;

    auto t0 = steady_clock::now();
    string a;
    for (int i = 0; i < n; i++) a = a + 'x';              // O(n^2) overall
    auto t1 = steady_clock::now();

    string b;
    for (int i = 0; i < n; i++) b += 'x';                 // O(n) overall
    auto t2 = steady_clock::now();

    long long slow = duration_cast<microseconds>(t1 - t0).count();
    long long fast = duration_cast<microseconds>(t2 - t1).count();
    cout << a.size() << " " << b.size() << "\n";
    cout << "s = s + c slower than s += c? " << (slow > fast) << "\n";
    return 0;
}
