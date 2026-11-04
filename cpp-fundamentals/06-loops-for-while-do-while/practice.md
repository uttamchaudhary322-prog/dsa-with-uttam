# Practice: Loops (`for`, `while`, `do-while`)

Complete these without looking at a solution first. Compile and test each program locally.

## Exercise 1 - Print 1 to N
Read `n` and print the numbers from `1` to `n` on one line. Use a `for` loop.
```text
Input:
5
Output:
1 2 3 4 5
```

## Exercise 2 - Multiplication table
Read a number and print its table from `1` to `10`.
```text
Input:
5
Output:
5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50
```

## Exercise 3 - Sum of the first N numbers
Read `n` and print `1 + 2 + ... + n`.
```text
Input:
100
Output:
5050
```
Check your answer with the formula `n * (n + 1) / 2`.

## Exercise 4 - Factorial
Read `n` and print `n!` (`n * (n - 1) * ... * 1`). Use `long long`.
```text
Input:
5
Output:
120
```
Test with `0` (`1`), `10` (`3628800`), and `20` (`2432902008176640000`). Then try `13` with an `int` and see what goes wrong.

## Exercise 5 - Sum of digits
Read a non-negative integer and print the sum of its digits. Use a `while` loop with `% 10` and `/ 10`.
```text
Input:
1234
Output:
10
```
Test with `9` (`9`) and `0` (`0`).

## Exercise 6 - Reverse a number
Read a non-negative integer and print it reversed. Use a `while` loop.
```text
Input:
1234
Output:
4321
```
Test with `5` (`5`) and `1200`. Why is the answer `21` and not `0021`?

## Exercise 7 - Prime number
Read a number and print `Prime` or `Not prime`. Use a loop and `break`.
```text
Input:
7
Output:
Prime
```
Test with `12` (`Not prime`), `1` (`Not prime`), `2` (`Prime`), `97` (`Prime`), and `100` (`Not prime`).

Hint: you only need to test divisors `i` while `i * i <= n`.

## Exercise 8 - Star triangle
Read `n` and print a triangle with `n` rows. Use nested loops.
```text
Input:
5
Output:
*
* *
* * *
* * * *
* * * * *
```

## Exercise 9 - Odd numbers only
Read `n` and print the odd numbers from `1` to `n`. Use `continue` to skip the even numbers.
```text
Input:
10
Output:
1 3 5 7 9
```

## Exercise 10 - Input validation
Ask for a number between `1` and `10` until the user enters a valid one. Use `do-while`.
```text
Enter a number (1-10): 15
Enter a number (1-10): 0
Enter a number (1-10): 7
You entered 7
```

## Exercise 11 - Predict, then run
Write down the output of each program before you run it.

**A**
```cpp
for (int i = 0; i < 3; i++) {
    cout << i;
}
```

**B**
```cpp
int i = 5;
while (i > 0) {
    i -= 2;
    cout << i << ' ';
}
```

**C**
```cpp
do {
    cout << "A";
} while (false);
```

**D**
```cpp
for (int k = 1; k <= 5; k++) {
    if (k % 2 == 0) {
        continue;
    }
    cout << k;
}
```

Check your predictions:
```text
A: 012
B: 3 1 -1
C: A
D: 135
```

## Challenge - Primes up to N
Read `n` and print all the prime numbers from `2` to `n`. Use nested loops.
```text
Input:
20
Output:
2 3 5 7 11 13 17 19
```

## LeetCode practice (optional)
- [1342. Number of Steps to Reduce a Number to Zero](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/) - Easy. Use a `while` loop and count the steps. Decide what to do when the number is even and when it is odd.
- [2894. Divisible and Non-divisible Sums Difference](https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/) - Easy. Loop from `1` to `n` and keep two running sums.
- [412. Fizz Buzz](https://leetcode.com/problems/fizz-buzz/) - Easy. Check the case that is divisible by both `3` and `5` first. It returns a `vector<string>`, which comes in the vectors lesson, so you can also return to it later.

These are function-based problems: you write one function and return the answer instead of reading input.

Tried it yourself? Compare your approach with the C++ solutions in the [`leetcode-solution`](../../leetcode-solution/README.md) folder as they are added.

## Self-check
- [ ] I can write a `for`, a `while`, and a `do-while` loop.
- [ ] I can explain the three parts of a `for` header.
- [ ] I can trace a loop and predict its output.
- [ ] I know why a `do-while` loop always runs at least once.
- [ ] I can choose between `for`, `while`, and `do-while`.
- [ ] I can use `break` and `continue`.
- [ ] I can write nested loops to print a pattern.
- [ ] I can spot an infinite loop and an off-by-one error.
