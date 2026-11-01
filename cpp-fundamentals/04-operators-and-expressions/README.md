# 04. Operators and Expressions

**Series:** C++ Fundamentals  
**Part:** 04  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Explain what an operator, an operand, and an expression are.
- Use arithmetic operators, including integer division and `%`.
- Compare values with relational operators and combine conditions with logical operators.
- Update variables with assignment, compound assignment, `++`, and `--`.
- Predict the result of an expression using operator precedence.
- Use parentheses to make an expression clear and correct.

## 1. Operators and expressions

An **operator** performs an action on one or more values, called **operands**. An **expression** combines values, variables, and operators, and produces a result.

```cpp
int total = 2 + 3 * 4;   // 2 + 3 * 4 is the expression; total becomes 14
```

## 2. Arithmetic operators

| Operator | Name | Example | Result |
|---|---|---|---|
| `+` | Addition | `10 + 3` | `13` |
| `-` | Subtraction | `10 - 3` | `7` |
| `*` | Multiplication | `10 * 3` | `30` |
| `/` | Division | `10 / 3` | `3` |
| `%` | Modulus (remainder) | `10 % 3` | `1` |

### Integer division

When both operands are integers, `/` discards the fractional part. Make at least one operand a `double` to get a decimal result.

```cpp
cout << 10 / 3 << '\n';     // 3
cout << 10 / 3.0 << '\n';   // 3.33333
```

`%` works with integers only. Writing `5 % 2.0` is a compile-time error.

Never divide by zero. Dividing an integer by zero with `/` or `%` is undefined behavior. Checking for a zero divisor needs an `if` statement, which comes in the next lesson.

## 3. Relational operators

| Operator | Meaning |
|---|---|
| `==` | equal to |
| `!=` | not equal to |
| `>` | greater than |
| `<` | less than |
| `>=` | greater than or equal to |
| `<=` | less than or equal to |

A relational expression produces a `bool`: `true` or `false`. With `cout`, `true` prints as `1` and `false` prints as `0`.

```cpp
int a = 5, b = 3;
cout << (a > b) << '\n';    // 1
cout << (a == b) << '\n';   // 0
cout << (a != b) << '\n';   // 1
```

**Important:** `=` assigns a value, while `==` compares two values.

## 4. Logical operators

| Operator | Name | Meaning |
|---|---|---|
| `&&` | AND | true if both conditions are true |
| `\|\|` | OR | true if at least one condition is true |
| `!` | NOT | reverses the result |

Truth table (`1` = true, `0` = false):

| A | B | `A && B` | `A \|\| B` |
|---|---|---|---|
| 1 | 1 | 1 | 1 |
| 1 | 0 | 0 | 1 |
| 0 | 1 | 0 | 1 |
| 0 | 0 | 0 | 0 |

```cpp
int age = 20;
bool ok = (age >= 18 && age <= 60);
cout << ok << '\n';    // 1
cout << !ok << '\n';   // 0
```

### Short-circuit evaluation

`&&` and `||` evaluate from left to right and stop as soon as the result is known. If the left side of `&&` is false, the right side is never evaluated.

```cpp
int x = 0;
bool left = false;
bool result = left && (++x > 0);   // ++x is skipped
// result is 0 and x is still 0
```

## 5. Assignment and compound assignment

`=` stores a value in a variable. A compound operator combines an operation with assignment.

| Operator | Example | Same as |
|---|---|---|
| `=` | `x = 5` | store `5` in `x` |
| `+=` | `x += 3` | `x = x + 3` |
| `-=` | `x -= 3` | `x = x - 3` |
| `*=` | `x *= 3` | `x = x * 3` |
| `/=` | `x /= 3` | `x = x / 3` |
| `%=` | `x %= 3` | `x = x % 3` |

## 6. Increment and decrement

`++` increases a variable by `1`, and `--` decreases it by `1`. Where you write the operator matters.

```cpp
int y = 5;
cout << y++ << '\n';   // prints 5, then y becomes 6
cout << y << '\n';     // prints 6
cout << ++y << '\n';   // y becomes 7, then prints 7
```

- **Postfix** (`y++`) uses the current value first, then changes it.
- **Prefix** (`++y`) changes the value first, then uses it.

Avoid changing the same variable more than once in a single expression, such as `i++ + ++i`. The result is undefined. Use separate statements instead.

## 7. Operator precedence

Precedence decides which operator runs first. Operators with the same precedence usually run from left to right.

| Level | Operators | Description |
|---|---|---|
| 1 (highest) | `( )` | Parentheses |
| 2 | `!` `++` `--` | Unary operators |
| 3 | `*` `/` `%` | Multiply, divide, remainder |
| 4 | `+` `-` | Add, subtract |
| 5 | `<` `<=` `>` `>=` | Relational |
| 6 | `==` `!=` | Equality |
| 7 | `&&` | Logical AND |
| 8 | `\|\|` | Logical OR |
| 9 (lowest) | `=` `+=` `-=` ... | Assignment |

This is a simplified table for beginners. C++ has more operators (for example `<<`, `>>`, and `?:`) that sit between these levels. When you are unsure, use parentheses.

```cpp
int r1 = 2 + 3 * 4;     // 14, because * runs before +
int r2 = (2 + 3) * 4;   // 20, because parentheses run first
```

### Parentheses and `cout`

`<<` has higher precedence than `>` and `==`, so a comparison inside a `cout` statement needs parentheses.

```cpp
cout << (a > b);   // correct
cout << a > b;     // error: parsed as (cout << a) > b
```

## Complete example

See [`operators-and-expressions.cpp`](operators-and-expressions.cpp).

The Instagram slide uses `endl`. You can use `'\n'` instead, as shown in Lesson 03.

### Expected output

```text
Sum: 22
Quotient: 3
Remainder: 2
Is a > b? 1
```

### More examples in this folder

| File | What it shows |
|---|---|
| [`arithmetic-operators.cpp`](arithmetic-operators.cpp) | `+ - * / %` and integer vs. decimal division |
| [`relational-logical-operators.cpp`](relational-logical-operators.cpp) | `==`, `!=`, `>`, `&&`, `\|\|`, `!`, and short-circuiting |
| [`assignment-and-increment.cpp`](assignment-and-increment.cpp) | `+=`, `*=`, `-=`, `/=`, `%=`, `x++`, and `++x` |
| [`operator-precedence.cpp`](operator-precedence.cpp) | How precedence and parentheses change the result |

## Common mistakes

| Mistake | Correct idea |
|---|---|
| Writing `a = b` when you mean to compare | Use `a == b`. `=` assigns. |
| Expecting `7 / 2` to be `3.5` | Integer division gives `3`. Use `7 / 2.0`. |
| Using `%` with a `double` | `%` needs integer operands. |
| `cout << a > b;` | Add parentheses: `cout << (a > b);` |
| `10 < x < 50` to test a range | Use `x > 10 && x < 50`. For `x = 100`, `10 < x < 50` is still true. |
| Using `&` or `\|` instead of `&&` or `\|\|` | `&` and `\|` are bitwise operators, a later topic. |
| Changing a variable twice in one expression | Split it into separate statements. |
| Dividing by zero | Make sure the divisor is not zero. |

## Compile and run

### Windows (MSYS2 UCRT64 / MinGW)
```bash
g++ -std=c++17 operators-and-expressions.cpp -o operators-and-expressions.exe
./operators-and-expressions.exe
```

### Linux / macOS
```bash
g++ -std=c++17 operators-and-expressions.cpp -o operators-and-expressions
./operators-and-expressions
```

## Practice

Open [`practice.md`](practice.md) for exercises.

## Key takeaway

Operators combine values into expressions, and precedence decides the order of evaluation. Remember that integer division drops the decimal part, `=` is not `==`, and when in doubt, add parentheses.

## Instagram

Companion carousel: **C++ Fundamentals 04 — Operators and Expressions**  
Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)
