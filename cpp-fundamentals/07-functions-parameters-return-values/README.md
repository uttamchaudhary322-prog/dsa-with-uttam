# 07. Functions, Parameters, and Return Values

**Series:** C++ Fundamentals  
**Part:** 07  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Explain why programs use functions.
- Write a function with parameters and a return value.
- Tell parameters and arguments apart.
- Use `void` functions and `return` correctly.
- Declare a function before `main` with a prototype.
- Explain pass-by-value and variable scope.
- Use default arguments and function overloading.

## 1. Why functions?

A **function** is a named block of code that you can run whenever you need it. Functions let you write code once and reuse it, split a big problem into small pieces, and give each piece a clear name.

You already use one: `main()` is a function. Every C++ program starts there.

```cpp
void greet() {
    cout << "Hello from a function!\n";
}

int main() {
    greet();
    greet();
    greet();
    return 0;
}
```
Output:
```text
Hello from a function!
Hello from a function!
Hello from a function!
```

See [`function-basics.cpp`](function-basics.cpp).

## 2. Anatomy of a function

```cpp
returnType name(parameters) {
    // body
    return value;
}
```

```cpp
int add(int a, int b) {
    return a + b;
}
```

| Part | Example | Meaning |
|---|---|---|
| Return type | `int` | The type of value the function gives back |
| Name | `add` | How you call it |
| Parameters | `int a, int b` | Variables that receive the input |
| Body | `{ return a + b; }` | The code that runs |

## 3. Parameters and arguments

- **Parameters** are the variables in the function definition (`a` and `b`).
- **Arguments** are the actual values you pass when you call it (`3` and `4`).

```cpp
int result = add(3, 4);   // 3 and 4 are arguments
```

The arguments are matched to the parameters **in order**, and their number must match. See [`parameters-and-arguments.cpp`](parameters-and-arguments.cpp).

## 4. Return values

`return` sends a value back to the caller and **ends the function immediately**.

```cpp
int absolute(int n) {
    if (n < 0) {
        return -n;
    }
    return n;
}
```

A function can return any type: `int`, `double`, `bool`, `char`, and more.

```cpp
bool isEven(int n) {
    return n % 2 == 0;
}
```

Every path through a non-`void` function must reach a `return`. If one does not, the result is undefined behavior. See [`return-values.cpp`](return-values.cpp).

## 5. `void` functions

`void` means the function returns nothing. It is used for actions, such as printing.

```cpp
void printStars(int n) {
    if (n <= 0) {
        return;   // leave early
    }
    for (int i = 0; i < n; i++) {
        cout << '*';
    }
    cout << '\n';
}
```

A `void` function has no value, so you cannot store its result in a variable. See [`void-functions.cpp`](void-functions.cpp).

## 6. Declaration (prototype) and definition

The compiler reads top to bottom, so a function must be known **before** you call it. There are two ways:

1. Write the function above `main`.
2. Write a **prototype** above `main` and the full definition below it.

```cpp
int add(int a, int b);   // prototype

int main() {
    cout << add(3, 4) << '\n';
    return 0;
}

int add(int a, int b) {   // definition
    return a + b;
}
```

Prototypes keep `main` at the top, which makes programs easier to read. See [`function-prototype.cpp`](function-prototype.cpp).

## 7. Pass by value

By default, C++ passes a **copy** of the argument. Changing the parameter does not change the original variable.

```cpp
void addOne(int x) {
    x++;
}

int main() {
    int n = 5;
    addOne(n);
    cout << n << '\n';   // 5
}
```

To get a changed value back, **return** it: `n = addOne(n);`. (Changing the original directly uses references, which come in a later lesson.)

See [`pass-by-value.cpp`](pass-by-value.cpp).

## 8. Scope

A variable exists only inside the block `{ }` where it is declared.

- A **local** variable lives inside a function and disappears when the function ends.
- A **global** variable is declared outside every function and is visible everywhere. Avoid globals when you can, because any function can change them.
- Two functions can each have their own variable with the same name. They are separate variables.

```cpp
void f() {
    int local = 5;
}

int main() {
    f();
    cout << local;   // error: 'local' was not declared in this scope
}
```

See [`scope.cpp`](scope.cpp).

## 9. Default arguments

A parameter can have a default value, used when the caller leaves that argument out.

```cpp
int power(int base, int exponent = 2);

power(5);      // 25  (exponent is 2)
power(2, 10);  // 1024
```

Defaults must be the **last** parameters. Put the default in the prototype if there is one, not in both places. See [`default-arguments.cpp`](default-arguments.cpp).

## 10. Function overloading

Several functions can share one name if their **parameters differ** (in number or type). C++ picks the right one from the call.

```cpp
int area(int side)               { return side * side; }
int area(int length, int width)  { return length * width; }
```

Only the return type is not enough to tell two functions apart. See [`function-overloading.cpp`](function-overloading.cpp).

## Complete example

Read two numbers and use three small functions: `add`, `larger`, and `isEven`.

See [`functions-parameters-return-values.cpp`](functions-parameters-return-values.cpp).

Example run:
```text
Enter two numbers: 7 12
Sum: 19
Larger: 12
x is odd
```

### More examples in this folder

| File | What it shows |
|---|---|
| [`function-basics.cpp`](function-basics.cpp) | Defining and calling a `void` function |
| [`parameters-and-arguments.cpp`](parameters-and-arguments.cpp) | Parameters, arguments, and `add` |
| [`return-values.cpp`](return-values.cpp) | `square`, `absolute`, and `isEven` |
| [`void-functions.cpp`](void-functions.cpp) | `void` functions and early `return;` |
| [`function-prototype.cpp`](function-prototype.cpp) | Declaring before `main`, defining after |
| [`pass-by-value.cpp`](pass-by-value.cpp) | The original variable stays unchanged |
| [`scope.cpp`](scope.cpp) | Local and global variables |
| [`default-arguments.cpp`](default-arguments.cpp) | A parameter with a default value |
| [`function-overloading.cpp`](function-overloading.cpp) | Same name, different parameters |

## Common mistakes

| Mistake | What happens | Correct idea |
|---|---|---|
| Calling a function before it is declared | Compile error: `'add' was not declared in this scope` | Define it above `main`, or add a prototype |
| `add(1)` for `add(int, int)` | Compile error: `too few arguments` | Pass every argument (or give defaults) |
| `add(1, 2, 3)` | Compile error: `too many arguments` | Pass exactly as many as the function takes |
| `int x = hi();` where `hi` is `void` | Compile error: `void value not ignored` | A `void` function returns nothing |
| Missing `return` on some path of an `int` function | Warning: `control reaches end of non-void function`, and undefined behavior | Return a value on every path |
| Expecting a function to change the caller's variable | The original is unchanged (pass by value) | Return the new value and assign it |
| Using a local variable outside its function | Compile error: `was not declared in this scope` | Return it, or declare it where you need it |
| `int f(int a, int b = 2, int c)` | Compile error: `default argument missing` | Defaults go on the last parameters |
| Two overloads that differ only by return type | Compile error | Change the parameters |
| `f(5L)` with `f(int)` and `f(double)` | Compile error: the call is ambiguous | Cast the argument, or add a matching overload |

Compile with warnings turned on to catch some of these:
```bash
g++ -std=c++17 -Wall -Wextra your-file.cpp -o your-file
```

## Compile and run

### Windows (MSYS2 UCRT64 / MinGW)
```bash
g++ -std=c++17 functions-parameters-return-values.cpp -o functions.exe
./functions.exe
```

### Linux / macOS
```bash
g++ -std=c++17 functions-parameters-return-values.cpp -o functions
./functions
```

## Practice

Open [`practice.md`](practice.md) for exercises.

## Key takeaway

A function packages code under a name so you can reuse it. It takes parameters, may return a value, and works on copies of its arguments. Declare a function before you call it, keep variables local, and give every non-`void` function a `return` on every path.

## Instagram

Companion carousel: **C++ Fundamentals 07 — Functions, Parameters, and Return Values**  
Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)
