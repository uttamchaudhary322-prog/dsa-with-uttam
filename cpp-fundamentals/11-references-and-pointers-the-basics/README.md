# 11. References and Pointers — The Basics

**Series:** C++ Fundamentals  
**Part:** 11  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Explain that every variable lives at a memory address, and print it with `&`.
- Create a reference and explain that it is another name for a variable.
- Pass arguments by value and by reference, and say when each is needed.
- Use `const &` to avoid copying big values such as vectors and strings.
- Create a pointer, read through it with `*`, and change a variable through it.
- Use `nullptr` and check a pointer before using it.
- Walk through an array with a pointer.
- Choose between a reference and a pointer.

## 1. Variables live at addresses

Every variable is stored somewhere in memory, and every place in memory has an **address**. The `&` operator gives you the address of a variable:

```cpp
int a = 5;
cout << a;    // 5       (the value)
cout << &a;   // 0x7ffd... (the address; it changes on every run)
```

Two different variables always have different addresses, even when their values are equal.

See [`address-of.cpp`](address-of.cpp).

## 2. References

A **reference** is another name for an existing variable. You make one with `&` **after the type**:

```cpp
int x = 10;
int& ref = x;    // ref is another name for x

ref = 20;        // x is now 20
x = 30;          // ref is now 30 too
```

There is only one `int` in memory. `x` and `ref` are two names for it, so `&x == &ref`.

Rules for references:

- A reference **must be set when it is created**. `int& r;` is an error.
- It can **never be re-pointed**. `ref = y;` copies the value of `y` into `x`. It does not make `ref` mean `y`.
- It cannot be empty (there is no "null reference").

The `&` after a type means "reference". The `&` in front of a variable (`&x`) means "address of". They are different things.

See [`references-basics.cpp`](references-basics.cpp).

## 3. Pass by value and pass by reference

By default a function receives **copies** of its arguments:

```cpp
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;          // only the copies are swapped
}

int x = 1, y = 2;
swapValue(x, y);
cout << x << y;        // 12  (nothing changed)
```

Add `&` to the parameters and the function works on the **originals**:

```cpp
void swapRef(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

swapRef(x, y);
cout << x << y;        // 21
```

Use a reference parameter when the function must **change** the caller's variable, such as a swap or a counter increment.

See [`pass-by-value-vs-reference.cpp`](pass-by-value-vs-reference.cpp).

## 4. `const &` for big values

Copying a big `vector` or `string` on every call is slow. If the function only needs to **look** at it, pass a `const` reference. There is no copy, and the compiler stops you from changing it:

```cpp
int sumOf(const vector<int>& v) {
    int total = 0;
    for (int x : v) total += x;
    return total;
}
```

| Parameter | Copies? | Can change the caller's value? | Use it for |
|---|---|---|---|
| `int n` | Yes | No | Small values (`int`, `char`, `bool`, `double`) |
| `int& n` | No | Yes | When the function must change the argument |
| `const vector<int>& v` | No | No | Big values that are only read |

This is the `const vector<int>&` you saw in lesson 10.

See [`const-reference.cpp`](const-reference.cpp).

## 5. Pointers

A **pointer** is a variable that stores an **address**. The type is written with a `*`:

```cpp
int x = 5;
int* p = &x;      // p holds the address of x

cout << p;        // the address (changes every run)
cout << *p;       // 5  (* "follows" the address to the value)

*p = 9;           // changes x
cout << x;        // 9
```

| Symbol | Meaning | Example |
|---|---|---|
| `int* p` | In a declaration: "p is a pointer to int" | `int* p = &x;` |
| `&x` | The address of `x` | `p = &x;` |
| `*p` | In an expression: the value that `p` points to | `*p = 9;` |

Unlike a reference, a pointer **can be re-pointed**:

```cpp
int y = 20;
p = &y;           // p now points to y
```

See [`pointer-basics.cpp`](pointer-basics.cpp).

## 6. `nullptr`

A pointer that points to nothing should be set to `nullptr`. Never use `*p` on a null pointer, because the program crashes. Check first:

```cpp
int* p = nullptr;

if (p != nullptr) {
    cout << *p;
}
```

An **uninitialized** pointer is even worse. It holds a random address, and using it is undefined behavior. Always start with `&something` or `nullptr`.

See [`null-pointer.cpp`](null-pointer.cpp).

## 7. Passing a pointer to a function

You can also change a caller's variable by passing its **address**:

```cpp
void swapPtr(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

swapPtr(&x, &y);   // pass the addresses
```

The reference version (`swapRef(x, y)`) is shorter and safer, so prefer it in everyday code. You will meet the pointer version in older code and in data structures such as linked lists and trees.

See [`pointer-swap.cpp`](pointer-swap.cpp).

## 8. Pointers and arrays

The name of an array is the address of its first element, so a pointer can walk through it:

```cpp
int arr[4] = {10, 20, 30, 40};
int* p = arr;

cout << *p;         // 10
cout << *(p + 1);   // 20
cout << p[2];       // 30  (same as arr[2])
```

`p + 1` moves by **one element** (4 bytes for an `int`), not by one byte. This is why `arr[i]` and `*(arr + i)` mean the same thing.

See [`pointers-and-arrays.cpp`](pointers-and-arrays.cpp).

## 9. Reference or pointer?

| | Reference `int&` | Pointer `int*` |
|---|---|---|
| Must be set when created | Yes | No (but you should) |
| Can be empty | No | Yes (`nullptr`) |
| Can be re-pointed | No | Yes |
| How you reach the value | Use the name directly | Use `*p` |
| Good for | Function parameters | Optional values, arrays, data structures |

A good default: use a **reference** for function parameters, and a **pointer** when you need "maybe nothing" or you need to re-point.

See [`reference-vs-pointer.cpp`](reference-vs-pointer.cpp).

## Complete example

Read two numbers. Swap them with a reference function, swap them back with a pointer function, then add 100 through a pointer.

See [`references-and-pointers.cpp`](references-and-pointers.cpp).

Example run:
```text
Enter two numbers: 3 8
After swapRef: 8 3
After swapPtr: 3 8
After *p + 100: x = 103
```

### More examples in this folder

| File | What it shows |
|---|---|
| [`address-of.cpp`](address-of.cpp) | The `&` operator and addresses |
| [`references-basics.cpp`](references-basics.cpp) | Creating a reference, and why it cannot be re-pointed |
| [`pass-by-value-vs-reference.cpp`](pass-by-value-vs-reference.cpp) | A swap that fails and a swap that works |
| [`const-reference.cpp`](const-reference.cpp) | `const &` for vectors and strings |
| [`pointer-basics.cpp`](pointer-basics.cpp) | `int*`, `&`, `*`, and re-pointing |
| [`null-pointer.cpp`](null-pointer.cpp) | `nullptr` and checking before use |
| [`pointer-swap.cpp`](pointer-swap.cpp) | Passing addresses to a function |
| [`pointers-and-arrays.cpp`](pointers-and-arrays.cpp) | Walking through an array with a pointer |
| [`reference-vs-pointer.cpp`](reference-vs-pointer.cpp) | The two side by side |

## Common mistakes

| Mistake | What happens | Correct idea |
|---|---|---|
| `void swap(int a, int b)` | Only the copies are swapped, so `x` and `y` do not change | `void swap(int& a, int& b)` |
| `int& r;` | Compile error: declared as reference but not initialized | `int& r = x;` |
| `int& r = 5;` | Compile error: cannot bind to a temporary value | Use a variable, or `const int& r = 5;` |
| `ref = y;` expecting `ref` to follow `y` | Copies `y`'s value into `x`. A reference never re-points | Use a pointer if you need to re-point |
| `int* p = x;` | Compile error: invalid conversion from `int` to `int*` | `int* p = &x;` |
| `int* a, b;` | Only `a` is a pointer. `b` is a plain `int` | `int *a, *b;` or two separate lines |
| `cout << p;` expecting the value | Prints the address | `cout << *p;` |
| `*p` when `p` is `nullptr` | The program crashes (segmentation fault) | Check `if (p != nullptr)` first |
| `int* p; *p = 5;` | Undefined behavior (uninitialized pointer) | Always start with `&x` or `nullptr` |
| `int& f() { int x = 5; return x; }` | Warning: reference to a local variable. Using it crashes or gives garbage | Return by value: `int f()` |
| `int& r = c;` where `c` is `const` | Compile error: discards qualifiers | `const int& r = c;` |

Compile with warnings turned on to catch some of these:
```bash
g++ -std=c++17 -Wall -Wextra your-file.cpp -o your-file
```

## Compile and run

### Windows (MSYS2 UCRT64 / MinGW)
```bash
g++ -std=c++17 references-and-pointers.cpp -o references-and-pointers.exe
./references-and-pointers.exe
```

### Linux / macOS
```bash
g++ -std=c++17 references-and-pointers.cpp -o references-and-pointers
./references-and-pointers
```

## Practice

Open [`practice.md`](practice.md) for exercises.

## Key takeaway

A **reference** (`int&`) is another name for a variable. A **pointer** (`int*`) is a variable that holds an address, and `*p` follows it to the value. Use `&` parameters when a function must change its argument, `const &` for big values that are only read, and always check a pointer against `nullptr` before using `*p`.

## Instagram

Companion carousel: **C++ Fundamentals 11 — References and Pointers: The Basics**  
Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)
