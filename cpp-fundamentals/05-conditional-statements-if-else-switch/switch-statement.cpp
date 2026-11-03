#include <iostream>

using namespace std;

int main() {
    int day = 3;

    switch (day) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        default: cout << "Invalid day\n";
    }

    return 0;
}
