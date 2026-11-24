# Practice: Time and Space Complexity Fundamentals

## Exercise 1 - Name the Big-O
Give the time complexity of each:
```cpp
// a
for (int i = 0; i < n; i++) cout << i;
// b
for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cout << i + j;
// c
for (int i = 1; i < n; i *= 2) cout << i;
// d
cout << a[0];
```

## Exercise 2 - Count it
For `n = 1000`, how many times does each loop in Exercise 1 run? Check by writing the program.

## Exercise 3 - Simplify
Simplify: `5n + 20`, `n² + 3n + 7`, `n log n + n`, `n + m`.

## Exercise 4 - Two loops
What is the complexity of two separate loops over `n`, one after the other? Of a loop inside a loop where the inner runs `m` times?

## Exercise 5 - Space
What is the extra space of: (a) summing an array, (b) copying a vector, (c) a recursive `f(n)` that calls `f(n-1)`?

## Exercise 6 - Brute force or not?
`n = 200000`. Is an O(n²) solution acceptable? What should you aim for?

## Exercise 7 - Spot the cost
Why is `s = s + c` slower than `s += c` inside a loop? Fix it.

## Exercise 8 - Overflow
Why does `int n = 100000; cout << n * n;` give a wrong value? Fix it.

## Exercise 9 - Duplicates
Write `hasDuplicate` three ways: O(n²) nested loops, O(n log n) sort, O(n) `unordered_set`. Count the steps of each.

## Exercise 10 - Challenge
Solve LeetCode **1. Two Sum** in O(n) and explain why it is faster than the O(n²) version.
