# 02. Variables, Data Types, and Constants

**Series:** C++ Fundamentals  
**Part:** 02  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Explain what a variable is.
- Distinguish declaration, initialization, and assignment.
- Choose a suitable built-in type for common values.
- Use `string` for text.
- Declare constants with `const`.
- Follow basic C++ identifier naming rules.

## 1. What is a variable?

A variable is a named object whose stored value can be used by a program. A variable has a type, a name, and a value.

```cpp
int score = 95;
```

- `int` is the type.
- `score` is the name.
- `95` is the initial value.

## 2. Declaration, initialization, and assignment

```cpp
int score;      // declaration
int level = 1;  // declaration + initialization

score = 95;     // assignment after declaration
score = 100;    // update the value
```

Do not read an ordinary local variable before it has been given a value. Give variables a meaningful initial value whenever practical.

## 3. Common numeric types

| Type | Typical use | Example |
|---|---|---|
| `int` | Whole numbers and counts | `int score = 95;` |
| `float` | Floating-point values (single precision) | `float temperature = 36.5f;` |
| `double` | Floating-point values (greater precision than float) | `double price = 99.95;` |

For many everyday decimal calculations, `double` is a sensible default. The exact sizes and precision are implementation-dependent within the guarantees of C++.

## 4. Character, Boolean, and string

```cpp
char grade = 'A';
bool isPracticing = true;
string name = "Uttam";
```

- `char` stores a character. Character literals use single quotes.
- `bool` stores `true` or `false`. When streamed without `boolalpha`, it normally prints as `1` or `0`.
- `string` stores text. Include `<string>` and use double quotes for string literals.

## 5. Constants with `const`

Use `const` when a value should not be reassigned after initialization.

```cpp
const int daysPerWeek = 7;
// daysPerWeek = 8; // Error: cannot assign to a const object
```

A `const` object must be initialized when it is declared.

## 6. Naming variables

Basic identifier rules:

- Begin with a letter (`A-Z`, `a-z`) or underscore.
- After the first character, digits are also allowed.
- Names are case-sensitive (`score` and `Score` are different identifiers).
- C++ keywords such as `int`, `while`, and `return` cannot be used as names.

Prefer meaningful names such as `totalScore` or `studyHours` instead of `x1`.

## Complete example

See [`variables-data-types-constants.cpp`](variables-data-types-constants.cpp).

### Expected output

```text
Name: Uttam
Problems solved: 12
Study hours: 2.5
Practicing: true
Days per week: 7
```

## Compile and run

With `g++`:

**Windows PowerShell**
```powershell
g++ variables-data-types-constants.cpp -o variables.exe
.\variables.exe
```

**Linux / macOS**
```bash
g++ variables-data-types-constants.cpp -o variables
./variables
```

## Practice tasks

1. Change `name` to your own name.
2. Change `problemsSolved` to a different integer.
3. Add a `char` variable for a grade.
4. Add a `const double` for a fixed tax rate or conversion factor.
5. Try assigning a new value to `daysPerWeek`. Read the compiler error.
6. Print a Boolean once normally and once with `boolalpha`.

## Key takeaway

Choose a type that matches the kind of data, initialize variables before using them, and use `const` when a value should not be reassigned.

## Instagram

Companion carousel: **C++ Fundamentals 02 — Variables, Data Types, and Constants**  
Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)
