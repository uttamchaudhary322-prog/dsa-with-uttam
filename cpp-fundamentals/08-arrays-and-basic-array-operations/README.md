# 08. Arrays and Basic Array Operations

**Series:** C++ Fundamentals  
**Part:** 08  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Explain what an array is and why programs use arrays.
- Declare and initialize an array.
- Read and change elements using indexes (starting at `0`).
- Loop over an array with `for` and with a range-based `for`.
- Find the sum, largest, smallest, and a value in an array.
- Reverse an array in place.
- Pass an array to a function.
- Avoid out-of-bounds mistakes.

## 1. Why arrays?

Imagine storing the marks of 5 students. Without arrays you need five separate variables:

```cpp
int m1 = 80, m2 = 65, m3 = 90, m4 = 72, m5 = 55;
```

For 100 students this is impossible. An **array** stores many values of the **same type** under one name, one after another in memory:

```cpp
int marks[5] = {80, 65, 90, 72, 55};
```

## 2. Declaring and accessing

```cpp
type name[size];
```

Each value is called an **element**, and each element has an **index**. Indexes start at `0`.

| Index | `0` | `1` | `2` | `3` | `4` |
|---|---|---|---|---|---|
| Value | `80` | `65` | `90` | `72` | `55` |

```cpp
cout << marks[0];   // 80  (first element)
cout << marks[4];   // 55  (last element: size - 1)
marks[1] = 70;      // change an element
```

For an array of size `n`, the valid indexes are `0` to `n - 1`.

See [`array-basics.cpp`](array-basics.cpp).

## 3. Initializing an array

```cpp
int a[5] = {10, 20, 30, 40, 50};   // every value given
int b[]  = {1, 2, 3};              // size is worked out: 3
int c[5] = {1, 2};                 // the rest become 0: 1 2 0 0 0
int d[5] = {};                     // all zeros
```

If you declare an array without values, such as `int e[5];`, a local array holds **garbage** (leftover values). Always give it values before you read it.

To get the number of elements of a real array:

```cpp
int n = sizeof(a) / sizeof(a[0]);   // total bytes / bytes of one element
```

See [`array-initialization.cpp`](array-initialization.cpp).

## 4. Looping over an array

A `for` loop from `0` to `n - 1` visits every element:

```cpp
for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
}
```

Use `i < n`, **not** `i <= n`. The index `n` is one past the end.

### Reading values into an array

```cpp
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}
```

The size of a normal array must be known at compile time. So the programs here create a big array (`const int MAX = 100;`) and use only the first `n` elements. They check that `n` is between `1` and `MAX` first.

See [`read-and-print.cpp`](read-and-print.cpp).

### Range-based `for`

If you do not need the index, loop over the elements directly:

```cpp
for (int x : arr) {
    cout << x << ' ';
}
```

To change the elements, use a reference (`int& x`). References are covered in a later lesson.

See [`range-based-for.cpp`](range-based-for.cpp).

## 5. Common array operations

### Sum and average

```cpp
int sum = 0;
for (int i = 0; i < n; i++) {
    sum += arr[i];
}
double average = (double)sum / n;
```

Cast one value to `double`, or the division drops the decimals (`5 / 2` is `2`). See [`sum-and-average.cpp`](sum-and-average.cpp).

### Largest and smallest

```cpp
int largest = arr[0];
for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
        largest = arr[i];
    }
}
```

Start with `arr[0]`, **not** `0`. If all numbers are negative, starting at `0` would give the wrong answer. See [`max-and-min.cpp`](max-and-min.cpp).

### Linear search

Check the elements one by one until you find the target:

```cpp
int index = -1;
for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
        index = i;
        break;
    }
}
```

`-1` is a common way to say "not found", because it is never a valid index. See [`linear-search.cpp`](linear-search.cpp).

### Reverse an array

Swap the first with the last, the second with the second last, and so on. Stop at the middle:

```cpp
for (int i = 0; i < n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
}
```

If you loop to `n` instead of `n / 2`, every pair is swapped twice and the array ends up unchanged. See [`reverse-array.cpp`](reverse-array.cpp).

## 6. Arrays and functions

When you pass an array to a function, the function works on the **original** array, not a copy. It does not know the size, so pass the size as another parameter:

```cpp
void doubleAll(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }
}
```

Add `const` when the function should only read the array:

```cpp
int sumOf(const int arr[], int n) { /* ... */ }
```

Inside the function, `sizeof(arr) / sizeof(arr[0])` does **not** give the number of elements. The array has turned into a pointer, so `sizeof(arr)` is the size of a pointer. Always pass `n`.

See [`arrays-and-functions.cpp`](arrays-and-functions.cpp).

## 7. Two-dimensional arrays

An array of arrays works like a table with rows and columns:

```cpp
int grid[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

cout << grid[1][2];   // 6  (row 1, column 2)
```

Use nested loops to visit every element. See [`two-dimensional-array.cpp`](two-dimensional-array.cpp).

## 8. Out-of-bounds access

C++ does **not** check your index. Reading or writing outside the array is undefined behavior: you may get garbage, a crash, or a program that seems to work.

```cpp
int a[3] = {1, 2, 3};
cout << a[3];   // no error at compile time, but index 3 does not exist
```

The most common cause is `i <= n` instead of `i < n`. Compile with `-Wall -Wextra` and use `-O2` for the compiler to warn about some obvious cases.

## Complete example

Read `n` numbers into an array, then print the sum and the largest number.

See [`arrays.cpp`](arrays.cpp).

Example run:
```text
How many numbers (1 to 100)? 5
Enter 5 numbers: 3 9 2 7 1
Sum: 22
Largest: 9
```

### More examples in this folder

| File | What it shows |
|---|---|
| [`array-basics.cpp`](array-basics.cpp) | Declaring, indexing, and changing elements |
| [`array-initialization.cpp`](array-initialization.cpp) | The ways to initialize, and counting elements |
| [`read-and-print.cpp`](read-and-print.cpp) | Reading `n` numbers and printing them |
| [`sum-and-average.cpp`](sum-and-average.cpp) | Sum and average of an array |
| [`max-and-min.cpp`](max-and-min.cpp) | Largest and smallest element |
| [`linear-search.cpp`](linear-search.cpp) | Finding a value and its index |
| [`reverse-array.cpp`](reverse-array.cpp) | Reversing an array in place |
| [`arrays-and-functions.cpp`](arrays-and-functions.cpp) | Passing an array and its size to a function |
| [`range-based-for.cpp`](range-based-for.cpp) | Looping without an index |
| [`two-dimensional-array.cpp`](two-dimensional-array.cpp) | A grid with rows and columns |

Most of these programs read their values with `cin`, so you can try your own numbers.

## Common mistakes

| Mistake | What happens | Correct idea |
|---|---|---|
| `arr[5]` in an array of size `5` | Out of bounds: undefined behavior (valid indexes are `0` to `4`) | The last index is `size - 1` |
| `for (int i = 0; i <= n; i++)` | Reads one element past the end | Use `i < n` |
| `int a[3] = {1, 2, 3, 4};` | Compile error: `too many initializers` | Match the size, or leave the size empty |
| `int a[n];` with `n` read from the user | Warning with `-pedantic`: `ISO C++ forbids variable length array` | Use a `const int MAX` array, or a `vector` (later lesson) |
| `b = a;` to copy an array | Compile error: `invalid array assignment` | Copy element by element with a loop |
| `a == b` to compare two arrays | Warning: it compares addresses, not values | Compare element by element |
| `cout << a;` to print an array | Prints a memory address | Loop and print each element |
| Reading an uninitialized local array | Garbage values | Initialize it, for example `int a[5] = {};` |
| `sizeof(arr)` inside a function | Gives the size of a pointer, not the array | Pass the size as a parameter |
| Starting the largest at `0` | Wrong when all numbers are negative | Start with `arr[0]` |
| `sum / n` with two `int`s | The decimals are lost | Use `(double)sum / n` |
| Using `a[1.5]` as an index | Compile error | An index must be an integer |

Compile with warnings turned on to catch some of these:
```bash
g++ -std=c++17 -Wall -Wextra your-file.cpp -o your-file
```

## Compile and run

### Windows (MSYS2 UCRT64 / MinGW)
```bash
g++ -std=c++17 arrays.cpp -o arrays.exe
./arrays.exe
```

### Linux / macOS
```bash
g++ -std=c++17 arrays.cpp -o arrays
./arrays
```

## Practice

Open [`practice.md`](practice.md) for exercises.

## Key takeaway

An array stores many values of the same type under one name. Indexes run from `0` to `size - 1`, and C++ does not stop you from going outside them. Loop with `i < n`, start the largest and smallest with `arr[0]`, and pass the size along when you give an array to a function.

## Instagram

Companion carousel: **C++ Fundamentals 08 — Arrays and Basic Array Operations**  
Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)
