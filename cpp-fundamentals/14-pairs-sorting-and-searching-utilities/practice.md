# Practice: Pairs, Sorting, and Searching Utilities

## Exercise 1 - Pair of values
Read a name and a score into a `pair<string,int>` and print `Name: score`.

## Exercise 2 - Top to bottom
Read `n` numbers and print them in descending order.
```text
Input:
5
4 9 2 7 1
Output:
9 7 4 2 1
```

## Exercise 3 - Leaderboard
Read `n` students `(name marks)`. Print them by marks high to low; if marks tie, by name A to Z.

## Exercise 4 - Where did it come from?
Read `n` numbers, sort them, and print each value with its **original index**.
```text
Input:
4
40 10 30 20
Output:
10 1
20 3
30 2
40 0
```

## Exercise 5 - Count occurrences
Read a sorted array and a value `x`. Print how many times `x` appears using `lower_bound` and `upper_bound`.

## Exercise 6 - Insert position
Given a sorted array and `x`, print the index where `x` is, or where it would be inserted (`lower_bound`).

## Exercise 7 - Unique sorted
Read `n` numbers and print the distinct values in ascending order using `sort` + `unique` + `erase`.

## Exercise 8 - Spot the bug
Why does this print `0`? Fix it two ways.
```cpp
vector<int> v = {9, 7, 3, 1};
cout << binary_search(v.begin(), v.end(), 7);
```

## Exercise 9 - Strict ordering
Explain why `[](int a,int b){ return a <= b; }` is not a valid comparator.

## Exercise 10 - Challenge
Solve LeetCode **1. Two Sum** with sort + two pointers while keeping the original indexes.

## Related practice
After finishing the exercises, try these LeetCode problems:

| Problem | Why it fits |
|---|---|
| [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Sort and remove duplicates |
| [1. Two Sum](https://leetcode.com/problems/two-sum/) | Sort with original indexes and use two pointers |
| [704. Binary Search](https://leetcode.com/problems/binary-search/) | Search a sorted array |
| [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/) | Find an insertion index with `lower_bound` |
| [349. Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/) | Sort and find unique common values |
| [1356. Sort Integers by The Number of 1 Bits](https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/) | Sort with a custom comparator |
