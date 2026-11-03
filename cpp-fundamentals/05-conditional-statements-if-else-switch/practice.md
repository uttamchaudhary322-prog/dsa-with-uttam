# Practice: Conditional Statements (`if`, `else`, `switch`)

Complete these without looking at a solution first. Compile and test each program locally.

## Exercise 1 - Positive, negative, or zero
Read an integer and print `Positive`, `Negative`, or `Zero`.
```text
Input:
-3
Output:
Negative
```
Test with `5` and `0`.

## Exercise 2 - Even or odd
Read an integer and print `Even` or `Odd`. Use `%` and `if`-`else`.
```text
Input:
12
Output:
Even
```
Test with `7`. Expected output: `Odd`.

## Exercise 3 - Grade calculator
Read marks and print a grade using an `else if` ladder.

| Marks | Grade |
|---|---|
| 90 or more | A |
| 75 to 89 | B |
| 50 to 74 | C |
| below 50 | F |

```text
Input:
82
Output:
Grade: B
```
Test with `95`, `75`, `74`, `50`, and `49`. Expected grades: `A`, `B`, `C`, `C`, `F`.

## Exercise 4 - Largest of three numbers
Read three integers and print the largest. Use `if` statements or `&&`.
```text
Input:
7 12 9
Output:
12
```

## Exercise 5 - Leap year
Read a year and print `Leap year` or `Not a leap year`.

A year is a leap year if it is divisible by 4, except century years, which must be divisible by 400. Combine `&&` and `||`.
```text
Input:
2024
Output:
Leap year
```
Test with `1900` (`Not a leap year`), `2000` (`Leap year`), and `2023` (`Not a leap year`).

## Exercise 6 - Day of the week
Read a number from `1` to `7` and print the day name using `switch`. Print `Invalid day` for any other number.
```text
Input:
3
Output:
Wednesday
```

## Exercise 7 - Vowel or consonant
Read one lowercase or uppercase letter and print `Vowel` or `Consonant`. Use `switch` and group the vowel cases together.
```text
Input:
e
Output:
Vowel
```
Test with `z` (`Consonant`) and `A` (`Vowel`).

## Exercise 8 - Calculator
Extend the calculator from the lesson. Read two numbers and an operator (`+`, `-`, `*`, `/`). Use `switch` for the operator, and print `Cannot divide by zero` when dividing by `0`.
```text
Input:
12 * 4
Output:
48
```
Add the `%` operator for integers as a bonus.

## Exercise 9 - Predict, then run
Write down the output of each program before you run it.

**A**
```cpp
int x = 5;
if (x > 3) cout << "A\n";
else if (x > 1) cout << "B\n";
else cout << "C\n";
```

**B**
```cpp
int n = 1;
switch (n) {
    case 1: cout << "One\n";
    case 2: cout << "Two\n"; break;
    case 3: cout << "Three\n";
}
```

**C**
```cpp
int a = 2;
if (a == 1)
    cout << "X\n";
    cout << "Y\n";
```

Check your predictions:
```text
A: A
B: One, then Two
C: Y
```

## Challenge - Triangle type
Read three side lengths and print `Equilateral` (all sides equal), `Isosceles` (exactly two equal), or `Scalene` (all different). Assume the sides form a valid triangle.
```text
Input:
3 3 5
Output:
Isosceles
```
Test with `3 3 3` (`Equilateral`) and `3 4 5` (`Scalene`).

## LeetCode practice (optional)
- [1523. Count Odd Numbers in an Interval Range](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/) - Easy. Think about what `%` tells you about the two endpoints, and try to solve it without a loop.
- [1812. Determine Color of a Chessboard Square](https://leetcode.com/problems/determine-color-of-a-chessboard-square/) - Easy. Turn the letter and the digit into numbers, then use `%` and `if`.

Both are function-based problems: you write one function and return the answer instead of reading input.

Tried it yourself? Compare your approach with the C++ solutions in the [`leetcode-solution`](../../leetcode-solution/README.md) folder as they are added.

## Self-check
- [ ] I can write an `if`, an `if`-`else`, and an `else if` ladder.
- [ ] I know why the order of an `else if` ladder matters.
- [ ] I can combine conditions with `&&` and `||`.
- [ ] I can write a `switch` with `case`, `break`, and `default`.
- [ ] I can explain fall-through and use it to group cases.
- [ ] I know when to use `if`-`else` and when to use `switch`.
- [ ] I know the difference between `=` and `==`.
- [ ] I always use braces around the body of an `if`.
