#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {4, 9, -2, 7, 1};

    int sum = 0;
    int largest = v[0];
    int smallest = v[0];

    for (int x : v) {
        sum += x;
        if (x > largest) {
            largest = x;
        }
        if (x < smallest) {
            smallest = x;
        }
    }

    cout << "Sum: " << sum << '\n';
    cout << "Largest: " << largest << '\n';
    cout << "Smallest: " << smallest << '\n';
    cout << "Average: " << (double)sum / v.size() << '\n';

    return 0;
}
