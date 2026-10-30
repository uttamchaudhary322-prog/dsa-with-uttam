#include <iostream>
#include <string>

int main() {
    std::string name = "Uttam";
    int problemsSolved = 12;
    double studyHours = 2.5;
    const int daysPerWeek = 7;
    bool isPracticing = true;

    std::cout << "Name: " << name << '\n';
    std::cout << "Problems solved: " << problemsSolved << '\n';
    std::cout << "Study hours: " << studyHours << '\n';
    std::cout << std::boolalpha
              << "Practicing: " << isPracticing << '\n';
    std::cout << "Days per week: " << daysPerWeek << '\n';

    return 0;
}
