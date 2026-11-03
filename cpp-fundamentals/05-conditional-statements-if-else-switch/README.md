# 05. Conditional Statements (`if`, `else`, `switch`)

**Series:** C++ Fundamentals  
**Part:** 05  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Explain how a program uses a condition to make a decision.
- Use `if`, `if`-`else`, and `else if` to choose between paths.
- Combine conditions with `&&` and `||`, or nest one `if` inside another.
- Use `switch` with `case`, `break`, and `default`.
- Explain fall-through and group several cases together.
- Decide when to use `if`-`else` and when to use `switch`.
- Recognize and fix common mistakes with conditions.

## 1. Making decisions

So far, every program ran its statements from top to bottom. A **conditional statement** lets a program choose which code to run, based on a **condition**.

A condition is an expression that produces `true` or `false`. You built these in Lesson 04 with relational operators (`>`, `==`, ...) and logical operators (`&&`, `||`, `!`).

In a condition, `0` counts as false and any non-zero value counts as true.

## 2. The `if` statement

`if` runs a block of code only when its condition is true.

```cpp
if (condition) {
    // runs only when the condition is true
}
```

```cpp
int age = 20;

if (age >= 18) {
    cout << "Adult\n";
}
```
Output:
```text
Adult
```

If the condition is false, the block is skipped and the program continues after the closing brace.

## 3. The `if`-`else` statement

Add `else` to run different code when the condition is false. Exactly one of the two blocks runs.

```cpp
int num = 7;

if (num % 2 == 0) {
    cout << "Even\n";
} else {
    cout << "Odd\n";
}
```
Output:
```text
Odd
```

## 4. The `else if` ladder

Use `else if` to check several conditions in order. C++ tests them from top to bottom, runs the **first** block whose condition is true, and skips the rest. The final `else` is optional and runs when nothing matched.

```cpp
int marks = 82;

if (marks >= 90) {
    cout << "Grade: A\n";
} else if (marks >= 75) {
    cout << "Grade: B\n";
} else if (marks >= 50) {
    cout << "Grade: C\n";
} else {
    cout << "Grade: F\n";
}
```
Output:
```text
Grade: B
```

**Order matters.** If you check `marks >= 50` first, then `82` prints `C`, because that condition is true first and the other branches are never tested. Put the strictest condition first.

## 5. Nested `if` and combined conditions

An `if` can sit inside another `if`. The inner one is checked only when the outer condition is true.

```cpp
int age = 20;
bool hasId = true;

if (age >= 18) {
    if (hasId) {
        cout << "Entry allowed\n";
    }
}
```

When both checks must pass, `&&` does the same job with less nesting:

```cpp
if (age >= 18 && hasId) {
    cout << "Entry allowed\n";
}
```

Prefer the flat version when you can. Deeply nested code is harder to read.

## 6. Always use braces

Braces are optional when a block has exactly one statement, but they prevent bugs. Without braces, only the **first** statement belongs to the `if`:

```cpp
int x = 1;
if (x > 5)
    cout << "A\n";
    cout << "B\n";   // not part of the if, so it always runs
```
This prints `B`, even though the indentation suggests otherwise.

Braces also settle the "dangling else" problem. An `else` always belongs to the **nearest** `if`:

```cpp
if (a == 1)
    if (b == 1) cout << "X\n";
    else cout << "Y\n";   // belongs to the inner if
```
With `a = 1` and `b = 0` this prints `Y`. Use braces to make your meaning clear.

## 7. The `switch` statement

`switch` compares **one value** against a list of fixed `case` values.

```cpp
int day = 3;

switch (day) {
    case 1: cout << "Monday\n"; break;
    case 2: cout << "Tuesday\n"; break;
    case 3: cout << "Wednesday\n"; break;
    default: cout << "Invalid day\n";
}
```
Output:
```text
Wednesday
```

How it works:

- `switch (day)` evaluates `day` once and jumps to the matching `case`.
- `break` leaves the `switch`. Without it, execution continues into the next case.
- `default` runs when no case matches. It is optional.

Rules to remember:

- The `switch` value must be an integer type, a `char`, or an `enum`. A `double` or a `string` gives a compile error.
- Each `case` value must be a constant, such as `1` or `'A'`. Two cases cannot have the same value.
- `switch` only tests equality. It cannot test a range such as `day > 3`. Use `if` for ranges.

## 8. Fall-through and grouping cases

If a case has no `break`, execution **falls through** into the next case:

```cpp
int n = 2;

switch (n) {
    case 1: cout << "One\n";
    case 2: cout << "Two\n";
    case 3: cout << "Three\n"; break;
    default: cout << "Other\n";
}
```
Output:
```text
Two
Three
```

Fall-through is usually a bug. If you forget a `break` by accident, compile with `-Wall -Wextra` and `g++` warns you: `this statement may fall through`. When it is intentional, write `[[fallthrough]];` (C++17) so readers and the compiler know.

Fall-through is useful for **grouping** cases that share the same code:

```cpp
char grade = 'B';

switch (grade) {
    case 'A':
    case 'B':
    case 'C': cout << "Passed\n"; break;
    case 'F': cout << "Failed\n"; break;
    default: cout << "Invalid grade\n";
}
```

If a case declares a variable, put that case body inside braces `{ }`. Otherwise the compiler reports `jump to case label` because other cases could skip over the declaration.

## 9. `if`-`else` or `switch`?

| | `if`-`else` | `switch` |
|---|---|---|
| Checks | Ranges and any condition | One value against constants |
| Value types | Any (`int`, `double`, `string`, ...) | `int`, `char`, `enum` |
| Best for | Complex decisions with `&&` and `||` | Menus, days, fixed options |
| Long lists | A long chain gets messy | Many cases stay tidy |

Rule of thumb: ranges and complex conditions use `if`. One value with many fixed choices uses `switch`.

## 10. Shortcut: the ternary operator

For a simple two-way choice, the ternary operator `?:` fits in one line:

```cpp
// condition ? value_if_true : value_if_false
string type = (num % 2 == 0) ? "Even" : "Odd";
int larger = (a > b) ? a : b;
```

Use it for short, simple choices. For longer logic, a normal `if`-`else` is clearer. See [`ternary-operator.cpp`](ternary-operator.cpp).

## Complete example

A small calculator that uses `switch` for the operator and `if` to avoid dividing by zero.

See [`conditional-statements.cpp`](conditional-statements.cpp).

Example input and output:
```text
Input:
12 * 4
Output:
48
```
```text
Input:
9 / 0
Output:
Cannot divide by zero
```

This version assumes valid input, such as `12 * 4`. Input checking was covered in Lesson 03.

### More examples in this folder

| File | What it shows |
|---|---|
| [`if-statement.cpp`](if-statement.cpp) | A single `if` with true and false conditions |
| [`if-else-example.cpp`](if-else-example.cpp) | Choosing between two paths |
| [`else-if-ladder.cpp`](else-if-ladder.cpp) | Checking many conditions in order |
| [`nested-if.cpp`](nested-if.cpp) | Nested `if` and the same logic with `&&` |
| [`switch-statement.cpp`](switch-statement.cpp) | `switch` with `case`, `break`, and `default` |
| [`switch-fallthrough.cpp`](switch-fallthrough.cpp) | Fall-through and grouped cases |
| [`ternary-operator.cpp`](ternary-operator.cpp) | The `?:` shortcut |

## Common mistakes

| Mistake | What happens | Correct idea |
|---|---|---|
| `if (x = 5)` | `=` assigns `5` to `x`, so the condition is always true | Use `==` to compare |
| `if (x > 5);` | The `;` ends the `if`, so the block after it always runs | Remove the semicolon |
| No braces around several statements | Only the first statement belongs to the `if` | Always use `{ }` |
| Missing `break` in `switch` | Execution falls through to the next case | End each case with `break` |
| `switch` on a `double` or `string` | Compile error | Use `if`-`else`, or an `int`/`char` value |
| `0.1 + 0.2 == 0.3` | `false`, because decimal values are stored approximately | Compare with a small tolerance, not `==` |
| Wrong order in an `else if` ladder | An earlier, broader condition catches every value | Put the strictest condition first |
| Declaring a variable in a `case` without braces | Compile error: `jump to case label` | Put the case body in `{ }` |

Compile with warnings turned on to catch many of these:
```bash
g++ -std=c++17 -Wall -Wextra your-file.cpp -o your-file
```

## Compile and run

### Windows (MSYS2 UCRT64 / MinGW)
```bash
g++ -std=c++17 conditional-statements.cpp -o conditional-statements.exe
./conditional-statements.exe
```

### Linux / macOS
```bash
g++ -std=c++17 conditional-statements.cpp -o conditional-statements
./conditional-statements
```

Type an expression such as `12 * 4` and press Enter.

## Practice

Open [`practice.md`](practice.md) for exercises.

## Key takeaway

Conditions let a program choose what to run. Use `if`, `else if`, and `else` for ranges and complex conditions, and `switch` for one value with many fixed choices. Always use braces, remember `break` in a `switch`, and never confuse `=` with `==`.

## Instagram

Companion carousel: **C++ Fundamentals 05 — Conditional Statements (`if`, `else`, `switch`)**  
Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)
