#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 7; // if you want you can take it as input.
    string type = (num % 2 == 0) ? "Even" : "Odd";
    cout << num << " is " << type << '\n';

    int a = 8, b = 12;
    int larger = (a > b) ? a : b;
    cout << "Larger: " << larger << '\n';

    return 0;
}
