# Practice: C++ STL Essentials for DSA

Complete these without looking at a solution first. Use the STL algorithms instead of writing your own loops where you can.

## Exercise 1 - Largest and smallest
Read `n` numbers. Print the largest and smallest using `max_element` and `min_element`.
```text
Input:
5
4 9 -2 7 1
Output:
Largest: 9
Smallest: -2
```

## Exercise 2 - Index of the largest
Read `n` numbers. Print the **index** of the largest number (the first one if it appears more than once).
```text
Input:
5
4 9 2 9 7
Output:
1
```

## Exercise 3 - Sum with accumulate
Read `n` numbers and print their sum with `accumulate`. Use a start value that is safe for large numbers.
```text
Input:
3
2000000000 2000000000 2000000000
Output:
6000000000
```

## Exercise 4 - Average
Read `n` numbers and print the average as a decimal. Watch the start value of `accumulate`.
```text
Input:
4
1 2 3 4
Output:
2.5
```

## Exercise 5 - Count a value
Read `n` numbers and a value `x`. Print how many times `x` appears.
```text
Input:
6
1 2 3 2 4 2
2
Output:
3
```

## Exercise 6 - Search
Read `n` numbers and a value `x`. Print the index of the first `x`, or `-1` if it is not there.
```text
Input:
5
4 9 2 9 7
2
Output:
2
```

## Exercise 7 - Reverse
Read `n` numbers and print them reversed using `reverse`.
```text
Input:
5
1 2 3 4 5
Output:
5 4 3 2 1
```

## Exercise 8 - Reverse part of a vector
Start with `{1, 2, 3, 4, 5, 6}`. Reverse only the middle four elements (indexes 1 to 4).
```text
Output:
1 5 4 3 2 6
```

## Exercise 9 - Walk with iterators
Print a vector backwards using `rbegin()` and `rend()` (no indexes).
```text
Input vector: 10 20 30
Output: 30 20 10
```

## Exercise 10 - Second smallest using INT_MAX
Read `n` numbers (at least 2). Find the smallest and the second smallest in **one pass**, starting both from `INT_MAX`.
```text
Input:
5
7 3 9 3 5
Output:
Smallest: 3
Second smallest: 5
```
Decide what "second smallest" means when the smallest repeats, and write a comment that says which choice you made.

## Challenge - Fix the three bugs
```cpp
vector<double> v = {0.5, 1.5, 2.5};
cout << accumulate(v.begin(), v.end(), 0) << '\n';        // should print 4.5
cout << max_element(v.begin(), v.end()) << '\n';          // should print 2.5
auto it = find(v.begin(), v.end(), 9.0);
cout << *it << '\n';                                      // should be safe when 9.0 is missing
```

## Challenge - Array and vector
Create `array<int, 5> a = {5, 3, 8, 1, 9}`. Copy it into `vector<int> v` using `v.assign(a.begin(), a.end())`. Reverse the vector and show that `a` did not change.

## Related practice
After finishing the exercises, try these LeetCode problems:

| Problem | Why it fits |
|---|---|
| [1646. Get Maximum in Generated Array](https://leetcode.com/problems/get-maximum-in-generated-array/) | Build a vector, then `max_element` |
| [1491. Average Salary Excluding the Minimum and Maximum Salary](https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/) | `min_element`, `max_element`, `accumulate` |
| [1295. Find Numbers with Even Number of Digits](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/) | A loop with a count |
