# 15. `stack`, `queue`, `set`, and `unordered_map`

**Series:** C++ Fundamentals  
**Part:** 15  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Use `stack` (LIFO) and `queue` (FIFO) and know that `pop()` returns nothing.
- Use `set` for unique, sorted values and `unordered_set` for fast "seen it?" checks.
- Use `unordered_map` / `map` to store key -> value pairs and count frequencies.
- Explain why `m[key]` creates a missing key and how `count` / `find` avoid that.
- Pick the right container for a problem.

## 1. `stack` - Last In, First Out

```cpp
#include <stack>
stack<int> s;
s.push(1); s.push(2); s.push(3);
cout << s.top();   // 3 (peek)
s.pop();           // removes 3, returns nothing
cout << s.size() << s.empty();
```

| Function | Meaning |
|---|---|
| `push(x)` | put on top |
| `top()` | read the top (does not remove) |
| `pop()` | remove the top (returns `void`) |
| `empty()` / `size()` | check |

Real use: undo, brackets matching (`07_valid_parentheses.cpp`), reversing.

## 2. `queue` - First In, First Out

```cpp
#include <queue>
queue<int> q;
q.push(10); q.push(20); q.push(30);
cout << q.front() << q.back();   // 10 30
q.pop();                         // removes 10
```

Real use: BFS, task scheduling, "first come first served".

## 3. `set` - unique and sorted

```cpp
set<int> s = {5, 1, 5, 3};       // stores 1 3 5
s.insert(4);  s.erase(3);
s.count(4);                      // 1 or 0
auto it = s.find(5);             // end() if missing
s.lower_bound(2);                // first >= 2
```

- Duplicates are ignored. Elements stay **sorted**. Operations are O(log n).
- No `s[i]` indexing - use iterators or a range-for.
- `unordered_set` is the same idea with **no order** but O(1) average (see `08_contains_duplicate_set.cpp`).

## 4. `unordered_map` - key -> value

```cpp
unordered_map<string, int> m;
m["apple"] = 3;
m["apple"] += 2;                 // 5
m.count("kiwi");                 // 0
auto it = m.find("apple");       // it->first, it->second
m.erase("apple");
for (auto &[k, v] : m) cout << k << v;
```

Frequency counting - the most common DSA use:

```cpp
unordered_map<int,int> freq;
for (int x : a) freq[x]++;       // new key starts at 0
```

## 5. `map` vs `unordered_map` vs `set`

| Container | Order | Speed | Use when |
|---|---|---|---|
| `map` | sorted by key | O(log n) | you need keys in order |
| `unordered_map` | no order | O(1) average | you just need fast lookup |
| `set` | sorted, unique | O(log n) | unique sorted values |
| `unordered_set` | no order, unique | O(1) average | "have I seen it?" |

## Common mistakes

| Mistake | Fix |
|---|---|
| `s.top()` / `q.front()` on an empty container | check `!s.empty()` first |
| `int x = s.pop();` | `pop()` returns void: `int x = s.top(); s.pop();` |
| Reading `m[key]` just to check it | `m.count(key)` or `m.find(key)` (`[]` inserts it) |
| `s[0]` on a set | sets have no index |
| Relying on `unordered_map` order | use `map` if order matters |

## Programs in this lesson

| File | What it shows |
|---|---|
| `01_stack_basics.cpp` | push, top, pop |
| `02_queue_basics.cpp` | front, back, pop |
| `03_set_basics.cpp` | unique sorted values |
| `04_unordered_map_basics.cpp` | insert, update, find, erase |
| `05_frequency_count.cpp` | `freq[x]++` |
| `06_map_vs_unordered_map.cpp` | sorted `map` |
| `07_valid_parentheses.cpp` | stack: balanced brackets |
| `08_contains_duplicate_set.cpp` | unordered_set |
| `09_two_sum_hashmap.cpp` | Two Sum in O(n) |
| `10_mistake_operator_bracket.cpp` | `m[key]` creates the key |
| `11_mistake_empty_top.cpp` | empty checks, `pop()` is void |

Compile any file with `g++ -std=c++17 file.cpp -o out && ./out`.

## LeetCode practice

- [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
- [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)
- [1. Two Sum](https://leetcode.com/problems/two-sum/)
- [232. Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)
- [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/)
- [387. First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)
