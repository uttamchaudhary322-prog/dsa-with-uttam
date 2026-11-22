# Practice: `stack`, `queue`, `set`, and `unordered_map`

## Exercise 1 - Reverse with a stack
Read a string and print it reversed using a `stack<char>`.

## Exercise 2 - Queue simulation
Push 1 to 5 into a queue, then pop and print every element.

## Exercise 3 - Unique sorted
Read `n` numbers and print the distinct values in ascending order using a `set`.

## Exercise 4 - Frequency
Read `n` numbers and print each distinct number with how many times it appears (use `unordered_map`).
```text
Input:
6
4 1 4 2 1 4
Output (any order):
4 3
1 2
2 1
```

## Exercise 5 - First repeated
Read `n` numbers and print the first number that appears a second time (use `unordered_set`), or `-1`.

## Exercise 6 - Balanced brackets
Read a string of `()[]{}` and print `YES` if it is balanced, otherwise `NO`.

## Exercise 7 - Spot the bug
Why does this print `0 1`? How do you check for a key without adding it?
```cpp
unordered_map<string,int> m;
cout << m["apple"] << " " << m.size();
```

## Exercise 8 - pop returns what?
Fix: `int x = s.pop();`

## Exercise 9 - Sorted words
Read words, count them in a `map<string,int>`, print them in alphabetical order with counts.

## Exercise 10 - Challenge
Solve LeetCode **1. Two Sum** with `unordered_map` in one pass.

## Related practice
After finishing the exercises, try these LeetCode problems:

| Problem | Why it fits |
|---|---|
| [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | Match brackets with a stack |
| [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Track seen values with a set |
| [1. Two Sum](https://leetcode.com/problems/two-sum/) | Find complements with an `unordered_map` |
| [232. Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | Combine stack operations to build a queue |
| [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/) | Count characters with a map |
| [387. First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/) | Count frequencies and find the first unique character |
