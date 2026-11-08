# 09. Strings and String Operations

**Series:** C++ Fundamentals  
**Part:** 09  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Explain what a string is and declare one with `std::string`.
- Read the length, and the characters, of a string.
- Read a word with `cin` and a full line with `getline`.
- Join strings with `+` and `+=`.
- Compare strings with `==`, `<`, and `>`.
- Loop through a string and work with single characters.
- Use `substr`, `find`, `push_back`, and `pop_back`.
- Use `toupper`, `tolower`, `isalpha`, and `isdigit`.
- Reverse a string and check for a palindrome.

## 1. What is a string?

A **string** is a sequence of characters, such as a name or a sentence. In C++ you use the `string` type from the `<string>` header:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "Uttam";
    cout << name << '\n';
}
```

Use **double quotes** for a string (`"Uttam"`) and **single quotes** for one character (`'U'`). They are different types:

```cpp
string s = "A";   // a string with one character
char c = 'A';     // a single character
```

Under the hood a string is a row of characters, a lot like an array, so many ideas from the arrays lesson apply here too.

See [`string-basics.cpp`](string-basics.cpp).

## 2. Length and indexing

```cpp
string s = "hello";

cout << s.length();   // 5  (s.size() is the same)
cout << s[0];         // h  (indexes start at 0)
cout << s[4];         // o  (last index is length - 1)
```

| Index | `0` | `1` | `2` | `3` | `4` |
|---|---|---|---|---|---|
| Character | `h` | `e` | `l` | `l` | `o` |

Unlike a string literal, a `string` can be changed:

```cpp
s[0] = 'J';   // "Jello"
```

`s.empty()` is `true` when the string has no characters.

## 3. Reading strings

`cin >> s` reads **one word**. It stops at the first space.

```cpp
string word;
cin >> word;   // typing "hello world" gives "hello"
```

To read a whole line, including spaces, use `getline`:

```cpp
string line;
getline(cin, line);   // typing "hello world" gives "hello world"
```

**Careful when mixing them.** After `cin >> x`, the Enter key is still waiting in the input, so the next `getline` reads an empty line. Clear it first:

```cpp
int age;
cin >> age;
cin.ignore(1000, '\n');   // throw away the leftover Enter
string name;
getline(cin, name);
```

See [`string-input.cpp`](string-input.cpp).

## 4. Joining strings

`+` joins two strings. `+=` adds to the end of one.

```cpp
string full = first + " " + last;
full += "!";
full.push_back('?');   // add one character
full.pop_back();       // remove the last character
```

At least one side of a `+` must be a `string`. Two string literals cannot be added:

```cpp
string s = "hello" + "world";   // error
string s = string("hello") + "world";   // fine
```

See [`string-concatenation.cpp`](string-concatenation.cpp).

## 5. Comparing strings

Unlike arrays, strings can be compared with `==`. It compares the **characters**, not addresses.

```cpp
string a = "cat", b = "cat";
cout << (a == b);   // 1 (true)
```

`<` and `>` compare letter by letter by character code, like a dictionary. Uppercase letters come **before** lowercase ones, so `"Zebra" < "apple"` is `true`.

See [`string-comparison.cpp`](string-comparison.cpp).

## 6. Looping through a string

```cpp
for (size_t i = 0; i < s.length(); i++) {
    cout << s[i] << ' ';
}
```

`s.length()` returns an unsigned number (`size_t`). If you write `int i`, the compiler may warn about comparing signed and unsigned values. Using `size_t i` removes the warning.

Or loop over the characters directly:

```cpp
for (char c : s) {
    cout << c << ' ';
}
```

See [`loop-through-string.cpp`](loop-through-string.cpp), which also counts vowels.

## 7. Useful string operations

```cpp
string s = "hello world";

s.substr(0, 5);       // "hello"   substr(start, length)
s.substr(6);          // "world"   from index 6 to the end
s.find("world");      // 6         index of the first match
s.find("xyz");        // string::npos  when not found
```

Compare the result of `find` with `string::npos`:

```cpp
if (s.find("world") != string::npos) {
    cout << "found";
}
```

See [`substr-and-find.cpp`](substr-and-find.cpp).

## 8. Working with characters

The `<cctype>` header has helpers for single characters:

| Function | What it does | Example |
|---|---|---|
| `toupper(c)` | Uppercase version | `toupper('a')` is `'A'` |
| `tolower(c)` | Lowercase version | `tolower('A')` is `'a'` |
| `isalpha(c)` | Is it a letter? | `isalpha('x')` is true |
| `isdigit(c)` | Is it a digit? | `isdigit('7')` is true |

```cpp
upper[i] = toupper(s[i]);
```

Careful: `cout << toupper('a')` prints `65`, not `A`. The function returns an `int`, so cast it with `(char)toupper('a')`, or store it in a `char` or a string first.

Characters are also numbers: `'a' + 1` is `98`, and `(char)('a' + 1)` is `'b'`.

See [`character-functions.cpp`](character-functions.cpp).

## 9. Reverse and palindrome

To reverse a string, swap the first with the last, the second with the second last, and so on. Stop at the middle:

```cpp
int n = s.length();
for (int i = 0; i < n / 2; i++) {
    char temp = s[i];
    s[i] = s[n - 1 - i];
    s[n - 1 - i] = temp;
}
```

A **palindrome** reads the same forward and backward (`level`, `abba`). Compare the first with the last, the second with the second last, and stop as soon as a pair does not match.

See [`reverse-string.cpp`](reverse-string.cpp) and [`palindrome-check.cpp`](palindrome-check.cpp).

## 10. Out-of-bounds access

Just like arrays, `s[i]` does **not** check the index. `s[10]` on a string of size `3` is undefined behavior.

`s.at(10)` checks the index and stops the program with an `out_of_range` error:

```cpp
string s = "abc";
cout << s[10];      // undefined behavior
cout << s.at(10);   // throws std::out_of_range
```

## Complete example

Read a word, print its length and its reverse, and say whether it is a palindrome.

See [`strings.cpp`](strings.cpp).

Example run:
```text
Enter a word: madam
Length: 5
Reversed: madam
Palindrome
```
Another run:
```text
Enter a word: code
Length: 4
Reversed: edoc
Not a palindrome
```

### More examples in this folder

| File | What it shows |
|---|---|
| [`string-basics.cpp`](string-basics.cpp) | Declaring, length, indexing, and changing a string |
| [`string-input.cpp`](string-input.cpp) | `cin >>` for a word and `getline` for a line |
| [`string-concatenation.cpp`](string-concatenation.cpp) | `+`, `+=`, `push_back`, and `pop_back` |
| [`string-comparison.cpp`](string-comparison.cpp) | `==`, `<`, and `>` on strings |
| [`loop-through-string.cpp`](loop-through-string.cpp) | Looping and counting vowels |
| [`substr-and-find.cpp`](substr-and-find.cpp) | `substr` and `find` |
| [`character-functions.cpp`](character-functions.cpp) | `toupper`, `tolower`, `isalpha`, and `isdigit` |
| [`reverse-string.cpp`](reverse-string.cpp) | Reversing a string in place |
| [`palindrome-check.cpp`](palindrome-check.cpp) | Checking for a palindrome |

These programs read their values with `cin`, so you can try your own words.

## Common mistakes

| Mistake | What happens | Correct idea |
|---|---|---|
| `string s = "hello" + "world";` | Compile error: invalid operands to `operator+` | Make one side a `string`: `string("hello") + "world"` |
| `cin >> n;` then `getline(cin, line);` | `line` is empty, because the Enter key is left over | Call `cin.ignore(1000, '\n');` in between |
| `cin >> s` for a sentence | Only the first word is read | Use `getline(cin, s)` |
| `string s = 'a';` | Compile error: conversion from `char` to `string` | Use `"a"` for a string, or `char c = 'a';` |
| `char c = "a";` | Compile error: invalid conversion from `const char*` to `char` | Use single quotes for one character |
| `for (int i = 0; i < s.length(); i++)` | Warning: comparison of signed and unsigned values | Use `size_t i` |
| `s.length() - 1` on an empty string | Wraps around to a huge number (`18446744073709551615`) | Check `s.empty()` first |
| `s[10]` on a short string | Undefined behavior, no error | Keep `i < s.length()`, or use `s.at(i)` |
| `s.find("x") == -1` | Warning: signed and unsigned comparison | Compare with `string::npos` |
| `cout << "Hello" + 1;` | Prints `ello` (it moves the pointer, not the text) | Make one side a `string` |
| `cout << toupper('a');` | Prints `65` | `cout << (char)toupper('a');` |
| Comparing `"Zebra" < "apple"` and expecting `false` | It is `true`: uppercase letters come first | Convert both to the same case first |

Compile with warnings turned on to catch some of these:
```bash
g++ -std=c++17 -Wall -Wextra your-file.cpp -o your-file
```

## Compile and run

### Windows (MSYS2 UCRT64 / MinGW)
```bash
g++ -std=c++17 strings.cpp -o strings.exe
./strings.exe
```

### Linux / macOS
```bash
g++ -std=c++17 strings.cpp -o strings
./strings
```

## Practice

Open [`practice.md`](practice.md) for exercises.

## Key takeaway

A `string` holds text. Use `length()` and `[]` to look at its characters, `cin >>` for a word and `getline` for a line, `+` to join, and `==` to compare. Remember that indexes start at `0`, that single quotes mean one character, and that `[]` does not check your index.

## Instagram

Companion carousel: **C++ Fundamentals 09 — Strings and String Operations**  
Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)
