# Practice: Functions, Parameters, and Return Values

Complete these without looking at a solution first. Compile and test each program locally.

## Exercise 1 - Square
Write `int square(int x)` and print the square of a number read from the user.
```text
Input:
7
Output:
49
```

## Exercise 2 - Maximum of two
Write `int maxOf(int a, int b)` and print the larger number.
```text
Input:
7 12
Output:
12
```

## Exercise 3 - Even or odd
Write `bool isEven(int n)`. In `main`, print `Even` or `Odd`.
```text
Input:
12
Output:
Even
```
Test with `7` (`Odd`) and `0` (`Even`).

## Exercise 4 - Absolute value
Write `int absolute(int n)` without using a library function.
```text
Input:
-9
Output:
9
```

## Exercise 5 - Factorial function
Write `long long factorial(int n)` using a loop and print `n!`.
```text
Input:
5
Output:
120
```
Test with `0` (`1`) and `20` (`2432902008176640000`).

## Exercise 6 - Prime check
Write `bool isPrime(int n)`. Print `Prime` or `Not prime`.
```text
Input:
7
Output:
Prime
```
Test with `1` (`Not prime`), `2` (`Prime`), and `100` (`Not prime`).

## Exercise 7 - Print a line of stars
Write `void printStars(int n)` that prints `n` stars on one line. It should print nothing for `n <= 0`.
```text
Input:
5
Output:
*****
```

## Exercise 8 - Sum of digits
Write `int digitSum(int n)` for a non-negative number.
```text
Input:
1234
Output:
10
```

## Exercise 9 - Default argument
Write `int power(int base, int exponent = 2)`. Call it with one and with two arguments.
```text
power(5)     -> 25
power(2, 10) -> 1024
```

## Exercise 10 - Overloading
Write two functions named `area`: one with one parameter (a square) and one with two parameters (a rectangle).
```text
area(4)    -> 16
area(3, 5) -> 15
```

## Exercise 11 - Predict, then run
Write down the output of each program before you run it.

**A**
```cpp
int f(int x) { return x * 2; }

cout << f(f(3));
```

**B**
```cpp
void g(int x) { x = 99; }

int n = 4;
g(n);
cout << n;
```

**C**
```cpp
int h(int n) {
    if (n < 0) return -1;
    return n;
}

cout << h(-5) << ' ' << h(5);
```

**D**
```cpp
int x = 1;
{
    int x = 2;
}
cout << x;
```

Check your predictions:
```text
A: 12
B: 4
C: -1 5
D: 1
```

## Challenge - GCD
Write `int gcd(int a, int b)` that returns the greatest common divisor.
```text
Input:
12 18
Output:
6
```
Test with `7 13` (`1`) and `100 25` (`25`). Hint: keep replacing `(a, b)` with `(b, a % b)` until `b` is `0`.

## LeetCode practice (optional)
- [2235. Add Two Integers](https://leetcode.com/problems/add-two-integers/) - Easy. Your first function: take two parameters and return the sum.
- [3099. Harshad Number](https://leetcode.com/problems/harshad-number/) - Easy. Find the sum of the digits of `x` with a loop, then decide whether `x` is divisible by it. Return that sum, or `-1` if it is not.

Both are function-based problems: you write one function and return the answer instead of reading input.

Tried it yourself? Compare your approach with the C++ solutions in the [`leetcode-solution`](../../leetcode-solution/README.md) folder as they are added.

## Self-check
- [ ] I can write a function with parameters and a return type.
- [ ] I can explain the difference between a parameter and an argument.
- [ ] I know what `void` means and when to use it.
- [ ] I can write a prototype and a definition.
- [ ] I can explain why a function does not change the caller's variable.
- [ ] I know the difference between local and global variables.
- [ ] I can use a default argument.
- [ ] I can overload a function.
