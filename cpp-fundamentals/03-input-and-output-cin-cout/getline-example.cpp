#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;

    cout << "Enter your full name: ";
    getline(std::cin, fullName);

    cout << "Hello, " << fullName << "!\n";
    return 0;
}
