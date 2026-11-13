# Practice: Recursion Fundamentals

Complete these without looking at a solution first. For each one, write down the **base case** before you write the code.

## Exercise 1 - Print 1 to n
Write `void printUp(int n)` that prints `1` to `n` using recursion (no loop).
```text
Input: 5
Output: 1 2 3 4 5
```
Hint: call `printUp(n - 1)` **before** printing `n`.

## Exercise 2 - Factorial
Write `long long factorial(int n)`.
```text
Input: 6
Output: 720
```

## Exercise 3 - Sum of 1 to n
Write `int sumTo(int n)`.
```text
Input: 10
Output: 55
```

## Exercise 4 - Power
Write `long long power(long long base, int exp)`.
```text
Input: 2 8
Output: 256
```

## Exercise 5 - Digit sum
Write `int digitSum(int n)`.
```text
Input: 9045
Output: 18
```

## Exercise 6 - Count the digits
Write `int countDigits(int n)` using `n / 10`. Treat `0` as having `1` digit.
```text
Input: 90210
Output: 5
```

## Exercise 7 - Sum of a vector
Write `int sumFrom(const vector<int>& v, int i)`.
```text
Input: 5 numbers: 4 9 -2 7 1
Output: 19
```

## Exercise 8 - Largest in a vector
Write `int maxFrom(const vector<int>& v, int i)` that returns the largest value from index `i` to the end.
```text
Input: 3 8 2 9 4
Output: 9
```

## Exercise 9 - Palindrome
Write `bool isPalindrome(const string& s, int left, int right)`.
```text
Input: level
Output: yes
Input: hello
Output: no
```

## Exercise 10 - Trace by hand
Without running it, write out the calls and returns for `sumTo(3)`, in the same style as the factorial trace in the README. Then check your answer by running [`call-stack-trace.cpp`](call-stack-trace.cpp), changed to use `sumTo`.

## Challenge - GCD
Write `int gcd(int a, int b)` with Euclid's rule: `gcd(a, 0) = a`, otherwise `gcd(a, b) = gcd(b, a % b)`.
```text
Input: 48 18
Output: 6
```

## Challenge - Fix the crash
This program crashes. Find the missing piece and fix it.
```cpp
int countDown(int n) {
    cout << n << ' ';
    return countDown(n - 1);
}
```
Make it print `3 2 1` for `countDown(3)` and then stop.

## Related practice
After finishing the exercises, try these LeetCode problems:

| Problem | Why it fits |
|---|---|
| [509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) | The classic two-call recursion |
| [231. Power of Two](https://leetcode.com/problems/power-of-two/) | A base case and a smaller problem (`n / 2`) |
| [258. Add Digits](https://leetcode.com/problems/add-digits/) | Digit sum, repeated |
