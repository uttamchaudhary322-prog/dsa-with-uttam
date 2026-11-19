# 13. C++ STL Essentials for DSA

**Series:** C++ Fundamentals  
**Part:** 13  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Explain the three parts of the STL: containers, iterators, and algorithms.
- Use `begin()` and `end()` and read or change elements with `*`.
- Use `min`, `max`, `min_element`, and `max_element`, and turn the result into a value or an index.
- Use `accumulate`, `count`, and `find` correctly.
- Use `reverse`, `fill`, and `swap`.
- Use `std::array` as a fixed-size container.
- Use `INT_MAX`, `INT_MIN`, `using ll = long long`, and fast input and output in DSA programs.

## 1. What is the STL?

The **STL** (Standard Template Library) is a set of ready-made tools that ships with C++. It has three parts that work together:

| Part | What it is | Examples |
|---|---|---|
| **Containers** | Hold the data | `vector`, `string`, `array` (more in lesson 15) |
| **Iterators** | Point at a position inside a container | `v.begin()`, `v.end()` |
| **Algorithms** | Ready-made functions that work on a range of iterators | `reverse`, `max_element`, `accumulate`, `find`, `count` |

```cpp
vector<int> v = {4, 9, 2, 7};                 // container
auto it = max_element(v.begin(), v.end());    // algorithm + iterators
cout << *it;                                  // 9
```

Why it matters for DSA: instead of writing your own loop for "find the largest" or "reverse this", you call a function that is already tested and fast.

The headers you need:

| Header | What it gives you |
|---|---|
| `<vector>`, `<string>`, `<array>` | The containers |
| `<algorithm>` | `reverse`, `min_element`, `max_element`, `count`, `find`, `fill`, `swap`, `min`, `max` |
| `<numeric>` | `accumulate` |
| `<climits>` | `INT_MAX`, `INT_MIN`, `LLONG_MAX` |

See [`stl-overview.cpp`](stl-overview.cpp).

## 2. Iterators

An **iterator** is like a pointer to an element inside a container.

- `v.begin()` points at the **first** element.
- `v.end()` points **one past the last** element. It is a marker for "stop", not a real element.
- `*it` reads (or changes) the element that `it` points at.

```cpp
vector<int> v = {10, 20, 30, 40};

for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << ' ';        // 10 20 30 40
}
```

`auto` lets the compiler write the long iterator type for you. Iterators also support `+`, `-` and `++`:

```cpp
auto it = v.begin() + 2;       // third element
cout << *it;                   // 30
cout << it - v.begin();        // 2  (the index)
```

`rbegin()` and `rend()` go through the container **backwards**.

Never read `*v.end()`. It points past the last element, so it is undefined behavior.

See [`iterators.cpp`](iterators.cpp).

## 3. Algorithms work on a range

Most STL algorithms take a **range** `[begin, end)`: the start is included and the end is not.

```cpp
algorithm(v.begin(), v.end(), ...);       // the whole vector
algorithm(v.begin(), v.begin() + 2, ...); // only the first two elements
```

## 4. `min`, `max`, `min_element`, `max_element`

`min` and `max` compare **two values**. Both must have the same type:

```cpp
cout << min(3, 8);    // 3
cout << max(3, 8);    // 8
```

`min_element` and `max_element` search a **range** and return an **iterator**, not a value:

```cpp
vector<int> v = {4, 9, 2, 9, 7};

auto largest = max_element(v.begin(), v.end());
cout << *largest;               // 9      (* gives the value)
cout << largest - v.begin();    // 1      (- begin() gives the index)
```

If the largest value appears more than once, you get the **first** one. Make sure the vector is not empty before you use `*`.

See [`min-max.cpp`](min-max.cpp).

## 5. `accumulate`, `count` and `find`

### `accumulate` (needs `<numeric>`)

```cpp
vector<int> v = {1, 2, 3, 4};
cout << accumulate(v.begin(), v.end(), 0);    // 10
```

The **last argument is the start value and also the type of the result**. This catches many people:

```cpp
vector<double> d = {0.5, 1.5, 2.5};
cout << accumulate(d.begin(), d.end(), 0);    // 3    (int math: the decimals are lost)
cout << accumulate(d.begin(), d.end(), 0.0);  // 4.5
```

For big sums, start with `0LL` so the sum is a `long long`:

```cpp
accumulate(v.begin(), v.end(), 0LL);
```

See [`accumulate-sum.cpp`](accumulate-sum.cpp).

### `count`

```cpp
cout << count(v.begin(), v.end(), 9);    // how many 9s
```

### `find`

`find` returns an iterator to the **first** match, or `end()` when the value is not there. Always compare with `end()` before using the result:

```cpp
auto it = find(v.begin(), v.end(), 2);
if (it != v.end()) {
    cout << "index " << it - v.begin();
} else {
    cout << "not found";
}
```

See [`count-and-find.cpp`](count-and-find.cpp).

## 6. `reverse`, `fill` and `swap`

```cpp
vector<int> v = {1, 2, 3, 4, 5};

reverse(v.begin(), v.end());           // 5 4 3 2 1
reverse(v.begin(), v.begin() + 2);     // reverse only the first two
swap(v[0], v[4]);                      // swap two values
fill(v.begin(), v.end(), 0);           // 0 0 0 0 0
```

See [`reverse-fill-swap.cpp`](reverse-fill-swap.cpp).

## 7. `std::array`

`array<int, 5>` is a **fixed-size** container. It is a safer version of a plain array: it knows its own size, works with all the algorithms, and can be copied with `=`.

```cpp
array<int, 5> a = {5, 3, 8, 1, 9};
cout << a.size();                          // 5
cout << *max_element(a.begin(), a.end());  // 9
```

| | `int a[5]` | `array<int, 5>` | `vector<int>` |
|---|---|---|---|
| Size | Fixed | Fixed | Can grow and shrink |
| Knows its size | No | Yes (`size()`) | Yes (`size()`) |
| Works with algorithms | Yes (with pointers) | Yes (`begin`, `end`) | Yes (`begin`, `end`) |
| Can be copied with `=` | No | Yes | Yes |

Use a `vector` by default. Use `array` when the size is fixed and known.

See [`std-array.cpp`](std-array.cpp).

## 8. Everyday DSA setup

### Limits

```cpp
#include <climits>

int smallest = INT_MAX;    // bigger than any int, so any real value is smaller
int largest = INT_MIN;     // smaller than any int
```

`INT_MAX` is `2147483647`. Anything that can go beyond it needs `long long` (`LLONG_MAX` is about `9.2 * 10^18`).

See [`int-limits.cpp`](int-limits.cpp).

### A common template

```cpp
#include <bits/stdc++.h>      // almost the whole standard library
using namespace std;

using ll = long long;         // a short name for long long

int main() {
    ios::sync_with_stdio(false);   // faster input and output
    cin.tie(nullptr);
    // your code
}
```

- `#include <bits/stdc++.h>` works with GCC and Clang on Linux and Windows (MinGW). It is **not standard** and is missing on some compilers (for example MSVC), so in projects you share, prefer the individual headers.
- `using ll = long long;` is just a nickname.
- The two `ios` lines make `cin` and `cout` faster. After them, do not mix `cin` and `cout` with `scanf` and `printf`.

See [`dsa-template.cpp`](dsa-template.cpp).

## Complete example

Read `n` numbers. Print the sum, the smallest and largest numbers with their indexes, how many times the largest appears, then search for a number and print the vector reversed.

See [`stl-essentials.cpp`](stl-essentials.cpp).

Example run:
```text
How many numbers? 6
Enter 6 numbers: 4 9 2 9 7 -3
Sum: 28
Smallest: -3 at index 5
Largest: 9 at index 1
Largest appears 2 time(s)
Search for: 7
7 found at index 4
Reversed: -3 7 9 2 9 4
```

### More examples in this folder

| File | What it shows |
|---|---|
| [`stl-overview.cpp`](stl-overview.cpp) | Container, iterator and algorithm together |
| [`iterators.cpp`](iterators.cpp) | `begin`, `end`, `*it`, `auto`, `rbegin` |
| [`min-max.cpp`](min-max.cpp) | `min`, `max`, `min_element`, `max_element` |
| [`accumulate-sum.cpp`](accumulate-sum.cpp) | The start value decides the type |
| [`count-and-find.cpp`](count-and-find.cpp) | `count` and `find` |
| [`reverse-fill-swap.cpp`](reverse-fill-swap.cpp) | `reverse`, `fill`, `swap` |
| [`std-array.cpp`](std-array.cpp) | `std::array` |
| [`int-limits.cpp`](int-limits.cpp) | `INT_MAX`, `INT_MIN`, `LLONG_MAX` |
| [`dsa-template.cpp`](dsa-template.cpp) | `bits/stdc++.h`, `ll`, fast I/O |

## Common mistakes

| Mistake | What happens | Correct idea |
|---|---|---|
| `accumulate(d.begin(), d.end(), 0)` on a `vector<double>` | Works in `int`, so `0.5 + 1.5 + 2.5` gives `3` | Start with `0.0` |
| `accumulate(...)` over big `int` values with `0` | The `int` sum overflows (`-294967296` for three `2000000000`s) | Start with `0LL` |
| `cout << max_element(v.begin(), v.end());` | Compile error: no `operator<<` for an iterator | `cout << *max_element(...)` |
| `int i = max_element(v.begin(), v.end());` | Compile error: cannot convert an iterator to `int` | `int i = max_element(...) - v.begin();` |
| `*max_element(...)` on an empty vector | Undefined behavior (crashed in a test) | Check `!v.empty()` first |
| Using the result of `find` without checking | If the value is missing, `it` is `end()` and `*it` is undefined behavior | Check `it != v.end()` |
| `reverse(v.begin(), v.end);` | Compile error: `end` needs `()` | `v.end()` |
| Reading `*v.end()` | Undefined behavior: `end()` is past the last element | Stop when `it == v.end()` |
| `max(a, b)` with an `int` and a `long long` | Compile error: no matching function | Make both the same type |
| Forgetting `#include <numeric>` or `<algorithm>` | Compile error: `accumulate` or `sort` was not declared | Include the right header, or `<bits/stdc++.h>` |

Compile with warnings turned on to catch some of these:
```bash
g++ -std=c++17 -Wall -Wextra your-file.cpp -o your-file
```

## Compile and run

### Windows (MSYS2 UCRT64 / MinGW)
```bash
g++ -std=c++17 stl-essentials.cpp -o stl-essentials.exe
./stl-essentials.exe
```

### Linux / macOS
```bash
g++ -std=c++17 stl-essentials.cpp -o stl-essentials
./stl-essentials
```

## Practice

Open [`practice.md`](practice.md) for exercises.

## Key takeaway

The STL has **containers** (hold data), **iterators** (point into them), and **algorithms** (work on a range `[begin, end)`). Algorithms such as `max_element` and `find` return **iterators**: use `*it` for the value and `it - v.begin()` for the index, and check against `end()` before using the result. The last argument of `accumulate` sets the result type, so use `0LL` or `0.0` when it matters.

## Instagram

Companion carousel: **C++ Fundamentals 13 — C++ STL Essentials for DSA**  
Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)
