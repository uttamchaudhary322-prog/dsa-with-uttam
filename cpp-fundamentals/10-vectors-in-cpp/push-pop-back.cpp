#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;   // starts empty

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "Size after 3 push_back: " << v.size() << '\n';
    cout << "front: " << v.front() << ", back: " << v.back() << '\n';

    v.pop_back();    // removes 30
    cout << "Size after pop_back: " << v.size() << '\n';
    cout << "back is now: " << v.back() << '\n';

    v.clear();       // removes everything
    cout << "Size after clear: " << v.size() << '\n';

    // A vector created with a size already has that many elements.
    vector<int> w(5);
    w.push_back(7);
    cout << "w has " << w.size() << " elements, not 1 and not 5\n";

    return 0;
}
