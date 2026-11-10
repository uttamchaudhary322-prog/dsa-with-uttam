# Practice: Vectors in C++

Complete these without looking at a solution first. Compile and test each program locally.

## Exercise 1 - Read and print
Read `n`, then `n` numbers. Print them in the same order, separated by spaces.
```text
Input:
4
5 6 7 8
Output:
5 6 7 8
```

## Exercise 2 - Sum and average
Read `n` numbers into a vector. Print the sum and the average (as a decimal).
```text
Input:
4
1 2 3 4
Output:
Sum: 10
Average: 2.5
```

## Exercise 3 - Largest and smallest
Read `n` numbers and print the largest and the smallest.
```text
Input:
5
4 9 -2 7 1
Output:
Largest: 9
Smallest: -2
```
Test with `n = 1` and with all negative numbers.

## Exercise 4 - Reverse a vector
Read `n` numbers and print them in reverse, by swapping elements.
```text
Input:
5
1 2 3 4 5
Output:
5 4 3 2 1
```

## Exercise 5 - Count even numbers
Read `n` numbers and print how many are even.
```text
Input:
6
1 2 3 4 5 6
Output:
3
```

## Exercise 6 - Remove the last element
Read `n` numbers. Remove the last one with `pop_back`, then print the vector and its new size.
```text
Input:
4
10 20 30 40
Output:
10 20 30
Size: 3
```

## Exercise 7 - Double each element
Read `n` numbers. Use a range-based `for` with `int&` to double every element, then print the vector.
```text
Input:
3
1 2 3
Output:
2 4 6
```

## Exercise 8 - Insert and erase
Start with `{10, 20, 30, 40}`. Insert `15` at index 1, then erase the element at index 3. Print the result.
```text
Output:
10 15 20 40
```

## Exercise 9 - Remove all of a value
Read `n` numbers, then a value `x`. Build a new vector that has every number except `x`, and print it.
```text
Input:
6
1 2 3 2 4 2
2
Output:
1 3 4
```

## Exercise 10 - Squares
Write a function `vector<int> squares(int n)` that returns the squares of `1` to `n`. Print the result for `n = 5`.
```text
Output:
1 4 9 16 25
```

## Challenge - Second largest
Read `n` numbers (at least 2). Print the second largest **distinct** value without sorting.
```text
Input:
5
4 9 9 7 1
Output:
7
```

## Challenge - Grid of numbers
Read `rows` and `cols`. Create a 2D vector filled with `1, 2, 3, ...` row by row and print it as a table.
```text
Input:
2 3
Output:
1 2 3
4 5 6
```

## Related practice
After finishing the exercises, try these LeetCode problems:

| Problem | Why it fits |
|---|---|
| [1480. Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/) | Build a new vector from an old one |
| [1929. Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/) | `push_back` and indexing |
| [1672. Richest Customer Wealth](https://leetcode.com/problems/richest-customer-wealth/) | A 2D vector and a maximum |
