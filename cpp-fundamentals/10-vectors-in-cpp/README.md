# 10. Vectors in C++

**Series:** C++ Fundamentals  
**Part:** 10  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Explain what a vector is and why it is often better than a plain array.
- Declare and initialize a vector in different ways.
- Add and remove elements with `push_back` and `pop_back`.
- Use `size`, `empty`, `front`, `back`, and `clear`.
- Read and change elements with `[]` and `at`.
- Loop through a vector with an index loop and a range-based `for`.
- Use `insert` and `erase`.
- Copy a vector and pass one to a function.
- Create a 2D vector.

## 1. What is a vector?

An array has a fixed size that you choose when you write the program. A **vector** is an array that can **grow and shrink** while the program runs. It comes from the `<vector>` header:

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    cout << v.size() << '\n';   // 3
}
```

The type inside `< >` is the type of every element: `vector<int>`, `vector<double>`, `vector<string>`, and so on.

A vector keeps its elements next to each other in memory, just like an array, so `v[i]` is fast. It also remembers its own size, so you do not need a separate `n` variable.

See [`vector-basics.cpp`](vector-basics.cpp).

## 2. Creating a vector

```cpp
vector<int> a;                 // empty
vector<int> b = {4, 5, 6};     // with values: 4 5 6
vector<int> c(5);              // 5 elements, all 0
vector<int> d(5, 7);           // 5 elements, all 7
```

**Round brackets give a size. Curly braces give values.**

```cpp
vector<int> f(3);   // three elements: 0 0 0
vector<int> e{3};   // ONE element: 3
```

See [`vector-initialization.cpp`](vector-initialization.cpp).

## 3. Adding and removing at the end

```cpp
vector<int> v;       // empty
v.push_back(10);     // 10
v.push_back(20);     // 10 20
v.pop_back();        // 10
```

| Function | What it does |
|---|---|
| `v.push_back(x)` | Adds `x` at the end |
| `v.pop_back()` | Removes the last element |
| `v.size()` | Number of elements |
| `v.empty()` | `true` when there are no elements |
| `v.front()` | The first element |
| `v.back()` | The last element |
| `v.clear()` | Removes every element |

Careful: a vector created with a size **already contains that many elements**. `push_back` adds after them.

```cpp
vector<int> v(5);
v.push_back(7);
cout << v.size();   // 6, not 1
```

If you want an empty vector that grows, start with `vector<int> v;`.

See [`push-pop-back.cpp`](push-pop-back.cpp).

## 4. Reading and changing elements

Use `[]` with an index, just like an array. Indexes start at `0`.

```cpp
vector<int> v = {10, 20, 30};
cout << v[0];     // 10
v[1] = 25;        // {10, 25, 30}
```

`v[i]` does **not** check the index. Using a bad index is undefined behavior. `v.at(i)` checks it and stops the program with an `out_of_range` error:

```cpp
cout << v[10];      // undefined behavior
cout << v.at(10);   // throws std::out_of_range
```

You cannot create elements with `[]`. This is also undefined behavior:

```cpp
vector<int> v;
v[0] = 5;   // wrong: there is no element 0 yet. Use v.push_back(5).
```

## 5. Reading numbers into a vector

When you do not know the count in advance, read `n`, then `push_back` each value:

```cpp
int n;
cin >> n;

vector<int> v;
for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
}
```

See [`vector-input.cpp`](vector-input.cpp).

## 6. Looping through a vector

```cpp
// Index loop
for (size_t i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
}

// Range-based for
for (int x : v) {
    cout << x << ' ';
}
```

`v.size()` returns an unsigned number (`size_t`). If you write `int i`, the compiler may warn about comparing signed and unsigned values. Using `size_t i` removes the warning.

A range-based `for` gives you a **copy** of each element. To change the elements, use a reference:

```cpp
for (int& x : v) {
    x = x * 2;
}
```

Do not call `push_back` or `erase` on a vector while you are looping over it with a range-based `for`.

See [`loop-through-vector.cpp`](loop-through-vector.cpp).

## 7. Insert and erase

`push_back` and `pop_back` work at the end. To change the middle, use `insert` and `erase` with an **iterator**. For now, think of `v.begin() + i` as "position `i`".

```cpp
vector<int> v = {10, 20, 30, 40};

v.insert(v.begin() + 1, 15);   // {10, 15, 20, 30, 40}
v.erase(v.begin());            // {15, 20, 30, 40}
v.erase(v.begin() + 2);        // {15, 20, 40}
```

`v.erase(2)` is an error. `erase` needs a position, not an index.

`insert` and `erase` in the middle move every element after that position, so they are slower than `push_back` for big vectors.

See [`insert-and-erase.cpp`](insert-and-erase.cpp).

## 8. Common patterns

The same patterns you used with arrays work on vectors. Here are the sum, largest, and smallest:

```cpp
int sum = 0;
int largest = v[0];
int smallest = v[0];

for (int x : v) {
    sum += x;
    if (x > largest)  largest = x;
    if (x < smallest) smallest = x;
}
```

Make sure the vector is not empty before you use `v[0]`.

To reverse a vector, swap the first with the last, the second with the second last, and so on:

```cpp
int n = v.size();
for (int i = 0; i < n / 2; i++) {
    int temp = v[i];
    v[i] = v[n - 1 - i];
    v[n - 1 - i] = temp;
}
```

See [`sum-max-min.cpp`](sum-max-min.cpp) and [`reverse-vector.cpp`](reverse-vector.cpp).

## 9. Copying vectors

Unlike arrays, vectors can be copied with `=` and compared with `==`:

```cpp
vector<int> a = {1, 2, 3};
vector<int> b = a;    // b is a separate copy
b[0] = 99;            // a is still {1, 2, 3}

cout << (a == b);     // 0 (different)
```

See [`vector-copy.cpp`](vector-copy.cpp).

## 10. Vectors and functions

Passing a vector to a function **copies it** by default. For a big vector that is slow, and changes inside the function do not reach the original. To avoid the copy, add `&`. Add `const` as well when the function only reads the vector:

```cpp
int sumOf(const vector<int>& v) {
    int total = 0;
    for (int x : v) total += x;
    return total;
}
```

A function can also return a vector. The `&` is explained properly in lesson 11.

See [`vector-functions.cpp`](vector-functions.cpp).

## 11. 2D vectors

A vector of vectors makes a grid. Unlike a 2D array, the size can be chosen at run time:

```cpp
int rows = 3, cols = 4;
vector<vector<int>> grid(rows, vector<int>(cols, 0));

grid[1][2] = 5;   // row 1, column 2
```

See [`vector-2d.cpp`](vector-2d.cpp).

## Complete example

Read `n` numbers into a vector. Print the count, the sum, the largest number, and the numbers in reverse.

See [`vectors.cpp`](vectors.cpp).

Example run:
```text
How many numbers? 5
Enter 5 numbers: 3 9 -1 7 2
Count: 5
Sum: 20
Largest: 9
Reversed: 2 7 -1 9 3
```

### More examples in this folder

| File | What it shows |
|---|---|
| [`vector-basics.cpp`](vector-basics.cpp) | Declaring, `size`, indexing, and `empty` |
| [`vector-initialization.cpp`](vector-initialization.cpp) | Ways to create a vector, and `(3)` vs `{3}` |
| [`push-pop-back.cpp`](push-pop-back.cpp) | `push_back`, `pop_back`, `front`, `back`, and `clear` |
| [`vector-input.cpp`](vector-input.cpp) | Reading `n` numbers with `push_back` |
| [`loop-through-vector.cpp`](loop-through-vector.cpp) | Index loop, range-based `for`, and `int&` |
| [`insert-and-erase.cpp`](insert-and-erase.cpp) | `insert` and `erase` |
| [`sum-max-min.cpp`](sum-max-min.cpp) | Sum, largest, smallest, and average |
| [`reverse-vector.cpp`](reverse-vector.cpp) | Reversing in place |
| [`vector-copy.cpp`](vector-copy.cpp) | Copying with `=` and comparing with `==` |
| [`vector-functions.cpp`](vector-functions.cpp) | Passing and returning vectors |
| [`vector-2d.cpp`](vector-2d.cpp) | A vector of vectors |

## Common mistakes

| Mistake | What happens | Correct idea |
|---|---|---|
| `vector<int> v(5); v.push_back(7);` | `size()` is `6`, because 5 zeros are already there | Start with `vector<int> v;` when you want it to grow |
| `vector<int> v{3};` | One element `3`, not three elements | Round brackets give a size: `v(3)` |
| `vector<int> v; v[0] = 5;` | Undefined behavior: there is no element 0 | Use `v.push_back(5)` |
| `v[10]` on a short vector | Undefined behavior, no error | Keep `i < v.size()`, or use `v.at(i)` |
| `v.at(10)` on a short vector | Program stops with `out_of_range` | Check the index before using it |
| `v.size() - 1` on an empty vector | Wraps around to `18446744073709551615` | Check `v.empty()` first |
| `for (int i = 0; i < v.size(); i++)` | Warning: comparison of signed and unsigned values | Use `size_t i` |
| `v.erase(2);` | Compile error: no matching function | `v.erase(v.begin() + 2);` |
| `v.back()` or `v[0]` on an empty vector | Undefined behavior | Check `v.empty()` first |
| `for (int x : v) x = x * 2;` | The vector does not change, because `x` is a copy | `for (int& x : v)` |
| `vector<int> v; v.push_back(3.9);` | Stores `3`: the decimal part is dropped | Use `vector<double>` for decimals |

Compile with warnings turned on to catch some of these:
```bash
g++ -std=c++17 -Wall -Wextra your-file.cpp -o your-file
```

## Compile and run

### Windows (MSYS2 UCRT64 / MinGW)
```bash
g++ -std=c++17 vectors.cpp -o vectors.exe
./vectors.exe
```

### Linux / macOS
```bash
g++ -std=c++17 vectors.cpp -o vectors
./vectors
```

## Practice

Open [`practice.md`](practice.md) for exercises.

## Key takeaway

A `vector` is an array that can grow and shrink. Use `push_back` to add, `size()` to count, `[]` to read and change, and a range-based `for` to loop. Remember that `vector<int> v(5)` already holds five elements, that `[]` does not check your index, and that `int& x` is needed to change elements in a range-based `for`.

## Instagram

Companion carousel: **C++ Fundamentals 10 — Vectors in C++**  
Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)
