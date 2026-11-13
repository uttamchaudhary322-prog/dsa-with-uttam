# 12. Recursion Fundamentals

**Series:** C++ Fundamentals  
**Part:** 12  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Explain what recursion is.
- Write a recursive function with a **base case** and a **recursive case**.
- Trace the call stack of a recursive call by hand.
- Solve small problems recursively: countdown, factorial, sum, power, digit sum.
- Use recursion on a vector and on a string.
- Explain why the naive recursive Fibonacci is slow.
- Compare recursion with a loop.
- Avoid the common mistakes: no base case, wrong direction, missing `return`, and overflow.

## 1. What is recursion?

**Recursion** means a function **calls itself** to solve a smaller version of the same problem.

```cpp
void countdown(int n) {
    if (n == 0) {
        cout << "Go!\n";
        return;
    }
    cout << n << ' ';
    countdown(n - 1);
}

countdown(3);   // 3 2 1 Go!
```

`countdown(3)` prints `3`, then asks `countdown(2)` to do the rest. That call prints `2` and asks `countdown(1)`, and so on, until `countdown(0)` stops.

See [`countdown.cpp`](countdown.cpp).

## 2. The two parts of every recursive function

Every correct recursive function has both of these:

| Part | Job | Example (`factorial`) |
|---|---|---|
| **Base case** | The smallest problem. It answers directly and **stops** the recursion | `if (n <= 1) return 1;` |
| **Recursive case** | Calls the function on a **smaller** problem and uses the result | `return n * factorial(n - 1);` |

```cpp
long long factorial(int n) {
    if (n <= 1) {                    // base case
        return 1;
    }
    return n * factorial(n - 1);     // recursive case
}
```

`n! = n * (n - 1)!`, so the problem `factorial(5)` becomes the smaller problem `factorial(4)`.

Use `long long` because factorials grow fast. `13!` is already too big for an `int`, and `20!` is the largest that fits in a `long long`.

See [`factorial.cpp`](factorial.cpp).

## 3. The call stack

Each call gets its own **stack frame** with its own `n`. The frames pile up on the **call stack** until the base case is reached. Then the answers come back **up**, one frame at a time.

`factorial(3)`:

```text
call   factorial(3)
  call   factorial(2)
    call   factorial(1)
    return factorial(1) = 1        <- base case
  return factorial(2) = 2 * 1 = 2
return factorial(3) = 3 * 2 = 6
```

Calls go **down**. Answers come **up**.

Run [`call-stack-trace.cpp`](call-stack-trace.cpp) to print this yourself.

## 4. How to think recursively

Ask three questions:

1. **What is the smallest problem?** That is the base case.
2. **How do I make the problem smaller?** `n - 1`, `n / 10`, or `i + 1`.
3. **How do I combine the small answer into the big one?** `n * ...`, `n + ...`, and so on.

Example: the sum of `1` to `n`.

```cpp
int sumTo(int n) {
    if (n == 0) return 0;          // 1. smallest problem
    return n + sumTo(n - 1);       // 2. smaller problem, 3. combine
}
```

`sumTo(4) = 4 + sumTo(3) = 4 + 3 + sumTo(2) = ... = 10`

See [`sum-to-n.cpp`](sum-to-n.cpp), [`power.cpp`](power.cpp) and [`digit-sum.cpp`](digit-sum.cpp).

For digit sum, `n % 10` is the last digit and `n / 10` is everything else:

```cpp
int digitSum(int n) {
    if (n == 0) return 0;
    return n % 10 + digitSum(n / 10);
}
```

## 5. Recursion on a vector and a string

To go through a vector, pass an **index** and move it forward:

```cpp
int sumFrom(const vector<int>& v, int i) {
    if (i == (int)v.size()) return 0;      // no elements left
    return v[i] + sumFrom(v, i + 1);       // this element + the rest
}
```

To work on a string from both ends, pass `left` and `right` and move them toward each other:

```cpp
bool isPalindrome(const string& s, int left, int right) {
    if (left >= right) return true;
    if (s[left] != s[right]) return false;
    return isPalindrome(s, left + 1, right - 1);
}
```

See [`sum-vector.cpp`](sum-vector.cpp), [`reverse-string.cpp`](reverse-string.cpp) and [`palindrome.cpp`](palindrome.cpp).

## 6. Fibonacci: two calls, repeated work

```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
```

It is correct, but slow. `fib(4)` calls `fib(2)` **twice**, and the repeated work grows quickly:

| Call | Number of function calls |
|---|---|
| `fib(25)` | 242,785 |
| `fib(40)` | 331,160,281 |

A loop does this in `n` steps. Techniques that remember earlier answers (memoization) and dynamic programming fix this later in the DSA series.

See [`fibonacci.cpp`](fibonacci.cpp).

## 7. Recursion or a loop?

| | Recursion | Loop |
|---|---|---|
| Idea | A function calls itself on a smaller problem | A block of code repeats |
| Memory | One stack frame per call | Constant |
| Main risk | Stack overflow (too many calls, or no base case) | Infinite loop |
| Good for | Trees, divide and conquer, backtracking | Simple counting and scanning |

Any recursion can be written as a loop, and the other way around. Pick the one that is clearer. For a simple sum or factorial, a loop is usually better. Recursion becomes important for trees, graphs and backtracking later in the series.

See [`recursion-vs-loop.cpp`](recursion-vs-loop.cpp).

## Complete example

Read `n` (0 to 20) and print its factorial, the sum from 1 to `n`, its digit sum, and the `n`th Fibonacci number.

See [`recursion.cpp`](recursion.cpp).

Example run:
```text
Enter a number (0 to 20): 12
Factorial:   479001600
Sum 1 to n:  78
Digit sum:   3
Fibonacci:   144
```

### More examples in this folder

| File | What it shows |
|---|---|
| [`countdown.cpp`](countdown.cpp) | The simplest recursive function |
| [`factorial.cpp`](factorial.cpp) | Base case, recursive case, and `long long` |
| [`call-stack-trace.cpp`](call-stack-trace.cpp) | Printing every call and return |
| [`sum-to-n.cpp`](sum-to-n.cpp) | Sum of `1` to `n` |
| [`power.cpp`](power.cpp) | `base` to the power `exp` |
| [`digit-sum.cpp`](digit-sum.cpp) | `% 10` and `/ 10` |
| [`fibonacci.cpp`](fibonacci.cpp) | Two recursive calls, and counting the calls |
| [`sum-vector.cpp`](sum-vector.cpp) | Recursion with an index |
| [`reverse-string.cpp`](reverse-string.cpp) | Recursion with two ends |
| [`palindrome.cpp`](palindrome.cpp) | Stopping early |
| [`recursion-vs-loop.cpp`](recursion-vs-loop.cpp) | The same job, two ways |

## Common mistakes

| Mistake | What happens | Correct idea |
|---|---|---|
| No base case: `int f(int n) { return n * f(n - 1); }` | Infinite recursion. The stack runs out and the program crashes (segmentation fault) | Always write the base case first |
| Base case that is never reached: `if (n == 1) return 1;` and then calling `f(0)` | `n` skips past `1` and the program crashes | Use `n <= 1`, or make sure every input reaches the base case |
| Moving the wrong way: `return n + f(n + 1);` | The problem gets bigger, so the program crashes | Each call must get **closer** to the base case |
| Forgetting `return`: `n * fact(n - 1);` | The function returns garbage or crashes. The compiler warns: control reaches end of non-void function | `return n * fact(n - 1);` |
| `int` for factorial | `13!` overflows `int` and gives a wrong number (`1932053504`) | Use `long long` (correct up to `20!`) |
| Naive `fib(40)` | Over 331 million calls. It takes seconds | Use a loop or memoization |
| Very deep recursion, like `sumTo(1000000)` | Stack overflow | Use a loop when the depth is huge |

Compile with warnings turned on to catch some of these:
```bash
g++ -std=c++17 -Wall -Wextra your-file.cpp -o your-file
```

## Compile and run

### Windows (MSYS2 UCRT64 / MinGW)
```bash
g++ -std=c++17 recursion.cpp -o recursion.exe
./recursion.exe
```

### Linux / macOS
```bash
g++ -std=c++17 recursion.cpp -o recursion
./recursion
```

## Practice

Open [`practice.md`](practice.md) for exercises.

## Key takeaway

Recursion is a function that calls itself on a **smaller** problem. Every recursive function needs a **base case** that stops it and a **recursive case** that moves toward the base case. Calls pile up on the call stack going down, and answers come back up. Without a base case, the program crashes.

## Instagram

Companion carousel: **C++ Fundamentals 12 — Recursion Fundamentals**  
Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)
