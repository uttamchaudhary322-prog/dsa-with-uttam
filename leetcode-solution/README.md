# LeetCode Solutions

C++ solutions to the LeetCode problems I cover on Instagram
([@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)) and in the
`practice.md` files of the lessons.

Try each problem yourself first. Then compare your approach with the solution.

## How to find a solution

1. Find the problem number on LeetCode. For example, **2413. Smallest Even Multiple** has the number `2413`.
2. Open the file with that number in this folder: [`2413.cpp`](2413.cpp).

Every solution file is named `<problem-number>.cpp`. You can also look the
problem up in the index below.

> **Tip:** On GitHub, press `t` while viewing the repository and type the
> problem number to jump straight to its file.

## Solution index

| # | Problem | Difficulty | Solution | Lesson |
|---|---|---|---|---|
| 1281 | [Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/) | Easy | [`1281.cpp`](1281.cpp) | [04. Operators and Expressions](../cpp-fundamentals/04-operators-and-expressions/) |
| 2413 | [Smallest Even Multiple](https://leetcode.com/problems/smallest-even-multiple/) | Easy | [`2413.cpp`](2413.cpp) | [04. Operators and Expressions](../cpp-fundamentals/04-operators-and-expressions/) |

New solutions are added to this table as they are published.

## What each solution file contains

Every file follows the same layout:

```cpp
// LeetCode <number>. <Problem title>
// Difficulty: Easy | Medium | Hard
// Link: https://leetcode.com/problems/<problem-slug>/
//
// Approach: one or two lines explaining the idea.
// Time: O(...)    Space: O(...)

#include <iostream>

using namespace std;

class Solution {
public:
    int functionName(int n) {
        // solution goes here
        return n;
    }
};
```

- `class Solution` is the part you paste into LeetCode.

## Compile and run

### Windows (MSYS2 UCRT64 / MinGW)
```bash
g++ -std=c++17 2413.cpp -o 2413.exe
./2413.exe
```

### Linux / macOS
```bash
g++ -std=c++17 2413.cpp -o 2413
./2413
```

## Back to the lessons

See the [main README](../README.md) for the full C++ Fundamentals and DSA roadmap.
