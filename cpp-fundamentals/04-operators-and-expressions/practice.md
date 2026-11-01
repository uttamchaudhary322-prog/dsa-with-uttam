# Practice: Operators and Expressions

Complete these without looking at a solution first. Compile and test each program locally.

Conditional statements (`if`, `else`) come in the next lesson, so these exercises print `1` for true and `0` for false.

## Exercise 1 - Arithmetic calculator
Read two integers and print their sum, difference, product, quotient, and remainder.
```text
Input:
17 5
Output:
Sum = 22
Difference = 12
Product = 85
Quotient = 3
Remainder = 2
```

## Exercise 2 - Even or odd
Read an integer and print `1` if it is even, otherwise print `0`. Use `%` and `==`.
```text
Input:
12
Output:
1
```
Test with `7`. Expected output: `0`.

## Exercise 3 - Between 10 and 50
Read an integer and print `1` if it lies between `10` and `50` (inclusive), otherwise print `0`. Use `&&`.
```text
Input:
30
Output:
1
```
Test with `5` and `100`. Expected output for both: `0`.

## Exercise 4 - Average of three numbers
Read three integers and print their average as a decimal value.
```text
Input:
7 8 8
Output:
7.66667
```
Hint: `(7 + 8 + 8) / 3` gives `7`. Make one operand a `double`.

## Exercise 5 - Swap two numbers
Read two integers and swap their values using a temporary variable. Print them after the swap.
```text
Input:
3 9
Output:
9 3
```

## Exercise 6 - Sum of digits
Read a four-digit number and print the sum of its digits using only `/` and `%`.
```text
Input:
1234
Output:
Sum of digits = 10
```
Hint: `n % 10` gives the last digit, and `n / 10 % 10` gives the tens digit.

## Exercise 7 - Predict, then run
Write down the value of each expression before you run it. Then print each one with `cout` and compare.

1. `2 + 3 * 4`
2. `(2 + 3) * 4`
3. `10 - 4 - 3`
4. `7 / 2 * 2`
5. `7 % 4 * 2`
6. `5 > 3 && 2 + 2 == 4`
7. `!(5 > 3) || 4 == 4`
8. `10 / 4` and `10 / 4.0`

Check your predictions:
```text
14  20  3  6  6  1  1  2 and 2.5
```

## Exercise 8 - Increment and decrement
Predict the five printed values, then run the code.
```cpp
int n = 5;
cout << n++ << '\n';
cout << n << '\n';
cout << ++n << '\n';
cout << n-- << '\n';
cout << n << '\n';
```
Expected output:
```text
5
6
7
7
6
```

## LeetCode practice (optional)
- [2413. Smallest Even Multiple](https://leetcode.com/problems/smallest-even-multiple/) - Easy. Think about what `n % 2` tells you.
- [1281. Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/) - Easy. It uses `/` and `%`, and it is easier with loops, so you can also return to it after the loops lesson.

Both are function-based problems: you write one function and return the answer instead of reading input.

## Self-check
- [ ] I can explain the difference between an operator and an operand.
- [ ] I know why `7 / 2` is `3` and how to get `3.5`.
- [ ] I can use `%` to find a remainder.
- [ ] I know the difference between `=` and `==`.
- [ ] I can combine conditions with `&&`, `||`, and `!`.
- [ ] I can explain `x++` versus `++x`.
- [ ] I can predict `2 + 3 * 4` and fix the order with parentheses.
- [ ] I know why `cout << (a > b)` needs parentheses.
