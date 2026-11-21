// 07 - stack in action: balanced brackets
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(const string &s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') st.push(c);
        else {
            if (st.empty()) return false;           // nothing to match
            char t = st.top(); st.pop();
            if ((c == ')' && t != '(') || (c == ']' && t != '[') || (c == '}' && t != '{'))
                return false;
        }
    }
    return st.empty();                              // leftovers = unbalanced
}

int main() {
    cout << isValid("({[]})") << isValid("(]") << isValid("((") << "\n";   // 100
    return 0;
}
