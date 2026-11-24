# 16. Time and Space Complexity Fundamentals

**Series:** C++ Fundamentals  
**Part:** 16  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Explain what Big-O measures: how the number of steps **grows** as the input grows.
- Recognise O(1), O(log n), O(n), O(n log n), O(n²) and O(2ⁿ) in code.
- Count loops (single, nested, one after another, halving/doubling).
- Drop constants and smaller terms.
- Explain space complexity, including recursion stack space.
- Choose an approach that fits the problem limits, and spot hidden costs.

## 1. What is Big-O?

Big-O describes how the work **grows** when `n` (the input size) grows. It ignores machine speed and small details.

```cpp
for (int i = 0; i < n; i++) count++;          // n steps  -> O(n)
```

## 2. The common complexities

| Big-O | Name | Example | Steps when n = 1000 |
|---|---|---|---|
| O(1) | constant | `a[5]`, `s.push(x)` | 1 |
| O(log n) | logarithmic | binary search, `i *= 2` loop | about 10 |
| O(n) | linear | one loop | 1,000 |
| O(n log n) | linearithmic | `sort` | about 10,000 |
| O(n²) | quadratic | nested loops | 1,000,000 |
| O(2ⁿ) | exponential | naive `fib(n)` | astronomically large |

## 3. Counting loops

```cpp
for (int i = 0; i < n; i++) ...                       // O(n)
for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) ...                   // O(n^2)
for (int i = 1; i < n; i *= 2) ...                    // O(log n)
```

- Loops **one after another** add: `n + n` = O(n).
- **Nested** loops multiply: `n * m`.
- A triangle `j = i + 1` is `n(n-1)/2`, still O(n²).

## 4. Drop constants and smaller terms

| Exact | Big-O |
|---|---|
| `3n + 5` | O(n) |
| `n² + n` | O(n²) |
| `2n²` | O(n²) |
| `n + m` (two inputs) | O(n + m) |

## 5. Complexity of things you already use

| Operation | Cost |
|---|---|
| `v[i]`, `push_back` (amortized) | O(1) |
| `v.insert(v.begin(), x)` / `erase(begin)` | O(n) |
| `sort` | O(n log n) |
| `binary_search`, `lower_bound` | O(log n) |
| `map` / `set` operations | O(log n) |
| `unordered_map` / `unordered_set` (average) | O(1) |

## 6. Space complexity

Extra memory your algorithm uses, beyond the input.

```cpp
long long sum = 0;                  // O(1) extra
vector<int> copy = v;               // O(n) extra
```

Recursion also uses memory: depth `d` means O(d) stack space (`f(n)` calling `f(n-1)` is O(n) space).

## 7. How fast is fast enough?

A rough rule of thumb: a typical machine does about 10⁸ simple operations per second. Use the input limit to choose:

| n up to | Aim for |
|---|---|
| 10⁵ - 10⁶ | O(n) or O(n log n) |
| 10³ - 5·10³ | O(n²) is usually fine |
| 20 - 25 | O(2ⁿ) may pass |

For `n = 100000`, an O(n²) solution does 10,000,000,000 steps. That is a Time Limit Exceeded.

## Common mistakes

| Mistake | Fix |
|---|---|
| Passing a big vector by value in a loop | `const vector<int>&` |
| `s = s + c` in a loop (O(n²)) | `s += c` (O(n)) |
| `v.erase(v.begin())` in a loop | use a `queue` or index |
| `find` on a vector inside a loop | use `unordered_set` |
| `int` for `n * n` | `(long long)n * n` |
| Forgetting recursion stack space | count the depth |

## Programs in this lesson

| File | What it shows |
|---|---|
| `01_count_steps.cpp` | O(n), O(n²), O(log n) counts |
| `02_o1_vs_on.cpp` | loop vs formula |
| `03_nested_loops.cpp` | n*m, triangle, sequential loops |
| `04_log_loops.cpp` | halving and doubling |
| `05_two_sum_brute_vs_hash.cpp` | 1,999,000 vs 2,000 steps |
| `06_space_complexity.cpp` | O(1) vs O(n) extra space |
| `07_recursion_complexity.cpp` | fib: 242,785 calls vs 49 |
| `08_pass_by_value_cost.cpp` | hidden copy cost |
| `09_string_concat.cpp` | `s = s + c` vs `s += c` |
| `10_mistake_int_overflow.cpp` | `n * n` overflow |
| `11_mistake_hidden_loops.cpp` | hidden loop in `find` |

Compile any file with `g++ -std=c++17 file.cpp -o out && ./out`.

## LeetCode practice

- [1. Two Sum](https://leetcode.com/problems/two-sum/)
- [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)
- [509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)
- [70. Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)
- [704. Binary Search](https://leetcode.com/problems/binary-search/)
- [136. Single Number](https://leetcode.com/problems/single-number/)
