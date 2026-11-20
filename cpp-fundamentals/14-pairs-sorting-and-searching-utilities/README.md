# 14. Pairs, Sorting, and Searching Utilities

**Series:** C++ Fundamentals  
**Part:** 14  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Store two related values together with `pair` and read them with `.first` / `.second`.
- Build a `vector<pair<...>>` and loop over it with structured bindings.
- Sort ascending, descending, and with your own comparator lambda.
- Sort values **and remember their original indexes**.
- Use `binary_search`, `lower_bound` and `upper_bound` on a sorted range.
- Remove duplicates with `sort` + `unique` + `erase`.
- Explain why binary search needs sorted data and why comparators must be strict (`<`, never `<=`).

## 1. `pair` - two values, one object

```cpp
pair<string, int> p = {"Uttam", 95};
cout << p.first << " " << p.second;   // Uttam 95
auto q = make_pair(3, 7);
auto [name, marks] = p;               // C++17 structured binding
```

Pairs compare **first, then second**: `{1,9} < {2,0}` is true, and `{1,4} < {1,9}` is true. That is why sorting a `vector<pair<int,int>>` just works.

Header: `<utility>` (already included by `<vector>`, `<algorithm>`, `<map>`).

## 2. `vector<pair<...>>`

```cpp
vector<pair<string,int>> v;
v.push_back({"Asha", 82});
v.emplace_back("Meera", 76);
for (auto &[n, m] : v) cout << n << "=" << m << " ";
```

## 3. `sort`

```cpp
sort(v.begin(), v.end());                  // ascending
sort(v.begin(), v.end(), greater<int>());  // descending
sort(arr, arr + n);                        // plain arrays too
```

`sort` is O(n log n). Include `<algorithm>` (and `<functional>` for `greater`).

## 4. Custom comparator

A comparator answers: **"should `a` come before `b`?"**

```cpp
sort(s.begin(), s.end(), [](const auto &a, const auto &b) {
    if (a.second != b.second) return a.second > b.second; // marks high -> low
    return a.first < b.first;                              // tie -> name A -> Z
});
```

Rule: it must be a **strict weak ordering**. Use `<` or `>`, **never `<=` / `>=`** (equal elements can cause undefined behaviour or a crash).

## 5. Sort with indexes

```cpp
vector<pair<int,int>> v;                   // (value, original index)
for (int i = 0; i < n; i++) v.push_back({a[i], i});
sort(v.begin(), v.end());
```

## 6. Searching a sorted range

| Function | Returns |
|---|---|
| `binary_search(b, e, x)` | `true` / `false` |
| `lower_bound(b, e, x)` | iterator to first element `>= x` |
| `upper_bound(b, e, x)` | iterator to first element `> x` |

```cpp
auto lo = lower_bound(v.begin(), v.end(), 3);
auto hi = upper_bound(v.begin(), v.end(), 3);
int count = hi - lo;                 // how many 3s
int index = lo - v.begin();          // position
```

If nothing matches, `lower_bound` returns `end()`. Check before dereferencing.

⚠️ The range **must be sorted** (with the same ordering). On `{9,7,3,1}`, `binary_search(..., 7)` returns **false**.

## 7. Remove duplicates

```cpp
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());
```

`unique` only removes **neighbouring** duplicates and returns the new logical end - that is why you sort first and then `erase`.

## 8. Linear vs binary search

For 1,000,000 sorted numbers, finding the last one takes **1,000,000 steps** linearly but only **20 steps** with binary search (`log2 n`).

## Common mistakes

| Mistake | Fix |
|---|---|
| `binary_search` on unsorted / descending data | `sort` first, or pass `greater<int>()` |
| Comparator with `<=` | Use strict `<` / `>` |
| `unique` without `erase` | `v.erase(unique(...), v.end())` |
| Dereferencing `lower_bound` result blindly | Compare with `end()` first |

## Programs in this lesson

| File | What it shows |
|---|---|
| `01_pair_basics.cpp` | pair, comparison, structured binding |
| `02_vector_of_pairs.cpp` | vector of pairs |
| `03_sort_basics.cpp` | ascending / descending sort |
| `04_custom_comparator.cpp` | lambda comparators |
| `05_sort_with_indexes.cpp` | (value, index) trick |
| `06_binary_search.cpp` | binary_search, lower/upper_bound |
| `07_unique_erase.cpp` | remove duplicates |
| `08_linear_vs_binary.cpp` | 1,000,000 vs 20 steps |
| `09_mistake_unsorted_binary_search.cpp` | the hook mistake + fixes |
| `10_mistake_comparator_le.cpp` | strict comparator |
| `11_leetcode_style_demo.cpp` | two-sum with sort + indexes |

Compile any file with `g++ -std=c++17 file.cpp -o out && ./out`.

## LeetCode practice

- [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)
- [1. Two Sum](https://leetcode.com/problems/two-sum/)
- [704. Binary Search](https://leetcode.com/problems/binary-search/)
- [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/)
- [349. Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)
- [1356. Sort Integers by The Number of 1 Bits](https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/)
