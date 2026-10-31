# 03. Input and Output (`cin`, `cout`)

This lesson explains how a C++ console program reads input and displays output.

## Learning goals
- Print text, values, and expressions with `cout`.
- Read values into variables with `cin`.
- Chain multiple values in one input or output statement.
- Understand the difference between `cin >>` and `getline()`.
- Use `'\n'` for line breaks.
- Recognize common input/output mistakes.

## 1. The header
```cpp
#include <iostream>
```
`<iostream>` provides the standard stream objects used for console input and output.

## 2. Output with `cout`
Use the insertion operator `<<` to send content to standard output.
```cpp
cout << "Hello, C++!\n";
int age = 20;
cout << "Age: " << age << '\n';
```
You can chain values and expressions using multiple `<<` operators.

## 3. Input with `cin`
Use the extraction operator `>>` to read whitespace-separated values.
```cpp
int age;
cout << "Enter your age: ";
cin >> age;
```
Read multiple values in sequence:
```cpp
int first, second;
cin >> first >> second;
```
For input `12 5`, `first` receives `12` and `second` receives `5`.

## 4. Complete example
See [`input-output-cin-cout.cpp`](input-output-cin-cout.cpp).

Example input:
```text
12 5
```
Example output:
```text
Sum = 17
```

## 5. `cin >>` versus `getline()`
`cin >> name` reads one token and stops at whitespace. If the input is `Ada Lovelace`, it reads only `Ada`.

Use `getline(cin, fullName)` to read an entire line, including spaces:
```cpp
#include <iostream>
#include <string>
int main() {
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Hello, " << fullName << "!\n";
    return 0;
}
```
**Important:** When `getline()` follows formatted extraction such as `cin >> age`, the newline left in the input buffer may be consumed immediately. Use `getline(cin >> ws, fullName)` when you intentionally want to skip leading whitespace, or use `ignore()` to discard the pending newline when preserving leading spaces matters.

## 6. Newline: `'\n'` or `endl`?
- `'\n'` adds a newline.
- `endl` adds a newline and flushes the output stream.
- For ordinary output, `'\n'` is usually sufficient; flushing every line is often unnecessary.

## 7. Common mistakes
| Mistake | Correct idea |
|---|---|
| `cin << value` | Use `cin >> value` |
| `cout >> value` | Use `cout << value` |
| Forgetting `<iostream>` | Include the header |
| Expecting `cin >> name` to read spaces | Use `getline()` |
| Reading into a wrong variable/type | Declare the right type and check input |

## Compile and run
### Windows (MSYS2 UCRT64 / MinGW)
```bash
g++ -std=c++17 input-output-cin-cout.cpp -o input-output-cin-cout.exe
./input-output-cin-cout.exe
```
### Linux / macOS
```bash
g++ -std=c++17 input-output-cin-cout.cpp -o input-output-cin-cout
./input-output-cin-cout
```

## Practice
Open [`practice.md`](practice.md) for exercises.
