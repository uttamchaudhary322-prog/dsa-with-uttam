# LeetCode Solutions

This folder contains my C++ solutions to LeetCode problems that I solve while learning Data Structures and Algorithms.

I also share explanations and problem-solving concepts through Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/).

The solutions are organized by LeetCode problem number for easy navigation.

## How to Find a Solution

1. Find the problem number on LeetCode.
2. Open the solution index below.
3. Find the corresponding problem number.
4. Open its `.cpp` file.

**Example:** Problem 2413 → `2413.cpp`

You can also press `t` while browsing this repository on GitHub and search for the filename.

## Solution Index

| Problem No. | Problem Name | Difficulty | Solution | Related Lesson |
|---|---|---|---|---|
| 1281 | [Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/) | Easy | [1281.cpp](./1281.cpp) | [Operators and Expressions](../cpp-fundamentals/04-operators-and-expressions/) |
| 1523 | [Count Odd Numbers in an Interval Range](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/) | Easy | [1523.cpp](./1523.cpp) | [Conditional statement if, else, switch](../cpp-fundamentals/05-conditional-statements-if-else-switch) |
| 1812 | [Determine Color of a Chessboard Square](https://leetcode.com/problems/determine-color-of-a-chessboard-square/) | Easy | [1812.cpp](./1812.cpp) | [Conditional statement if, else, switch](../cpp-fundamentals/05-conditional-statements-if-else-switch) |
| 2413 | [Smallest Even Multiple](https://leetcode.com/problems/smallest-even-multiple/) | Easy | [2413.cpp](./2413.cpp) | [Operators and Expressions](../cpp-fundamentals/04-operators-and-expressions/) |

New solutions will be added to this table as I solve more problems.

## Code Structure

Each solution file follows a consistent structure:

- Problem number and title
- Difficulty
- LeetCode problem link
- Approach explanation
- Time complexity
- Space complexity
- C++ solution using `class Solution`

Example:

```cpp
// Problem: <number>. <problem title>
// Difficulty: Easy
// Link: <LeetCode problem URL>
//
// Approach: Brief explanation.
// Time Complexity: O(...)
// Space Complexity: O(...)

class Solution {
public:
    // LeetCode solution
};
```

## Running Solutions Locally

LeetCode solution files contain the `Solution` class but do not contain a `main()` function.

LeetCode provides the test harness when you submit your solution. Therefore, these files are not intended to be compiled directly as standalone programs.

For local testing, separate test-driver files can be created inside a `tests/` folder.

Example structure:

```text
leetcode-solution/
├── README.md
├── 1281.cpp
├── 2413.cpp

```

The test drivers can include the corresponding solution file and call its methods from `main()`.

## Related Resources

- [Main Repository README](../README.md)
- [C++ Fundamentals](../cpp-fundamentals/)
- [LeetCode](https://leetcode.com/)
- [Instagram - @dsa.with.uttam](https://www.instagram.com/uttamchaudhary484/)

## My Goal

I aim to understand every problem before looking at its solution.

My focus is on learning:

- Problem-solving approaches
- Data structures and algorithms
- Code optimization
- Time and space complexity
- Edge cases and logical thinking

**Understand the problem. Build the logic. Write the solution.**