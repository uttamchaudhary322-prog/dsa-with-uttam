// 05 - count frequency of each number (most common map use in DSA)
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> a = {4, 1, 4, 2, 1, 4};
    unordered_map<int, int> freq;
    for (int x : a) freq[x]++;                      // new key starts at 0

    cout << freq[4] << " " << freq[1] << " " << freq[2] << "\n";   // 3 2 1
    return 0;
}
