# 06. Loops (`for`, `while`, `do-while`)

**Series:** C++ Fundamentals  
**Part:** 06  
**Level:** Beginner  
**Language:** C++

## Learning goals

By the end of this lesson, you should be able to:

- Explain why programs use loops.
- Write `for`, `while`, and `do-while` loops.
- Trace a loop step by step and predict its output.
- Choose the right loop for a problem.
- Use `break` and `continue` to control a loop.
- Use a loop inside another loop (nested loops).
- Recognize infinite loops and off-by-one mistakes.

## 1. Why loops?

A **loop** repeats a block of code while a condition is true. Without a loop, repeating work means copying code:

```cpp
cout << "Hello\n";
cout << "Hello\n";
cout << "Hello\n";
cout << "Hello\n";
cout << "Hello\n";
```

With a loop, the same job takes three lines, and printing it 1000 times means changing one number:

```cpp
for (int i = 0; i < 5; i++) {
    cout << "Hello\n";
}
```

C++ has three main loops: `for`, `while`, and `do-while`.

## 2. The `for` loop

Use `for` when you know how many times to repeat.

```cpp
for (initialization; condition; update) {
    // body: repeats while the condition is true
}
```

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << ' ';
}
```
Output:
```text
1 2 3 4 5
```

The three parts in the parentheses:

| Part | Example | Meaning |
|---|---|---|
| Initialization | `int i = 1` | Runs once, before the loop starts |
| Condition | `i <= 5` | Checked before every round. The loop stops when it is false |
| Update | `i++` | Runs after every round |

### How a `for` loop runs

1. Run the initialization once.
2. Check the condition. If it is false, leave the loop.
3. Run the body.
4. Run the update, then go back to step 2.

Tracing `for (int i = 1; i <= 3; i++) cout << i << ' ';`:

| `i` | `i <= 3` | Output |
|---|---|---|
| 1 | true | `1` |
| 2 | true | `2` |
| 3 | true | `3` |
| 4 | false | the loop ends |

The variable `i` is declared in the `for` header, so it exists only inside the loop. Using it after the loop is a compile error.

### Counting down and stepping

```cpp
for (int i = 5; i >= 1; i--) { }       // 5 4 3 2 1
for (int i = 0; i <= 10; i += 2) { }   // 0 2 4 6 8 10
```

See [`for-loop.cpp`](for-loop.cpp) and [`for-loop-variations.cpp`](for-loop-variations.cpp).

## 3. The `while` loop

A `while` loop checks its condition **before** every round. If the condition is false at the start, the body never runs.

```cpp
int i = 1;
while (i <= 5) {
    cout << i << ' ';
    i++;
}
```
Output:
```text
1 2 3 4 5
```

You must change something inside the loop so the condition can become false. Here, `i++` does that. Without it, the loop never ends.

`while` is the natural choice when you do **not** know how many rounds you need, such as adding numbers until the user types `0`:

```cpp
int x, sum = 0;
cin >> x;
while (x != 0) {
    sum += x;
    cin >> x;
}
```

See [`while-loop.cpp`](while-loop.cpp).

## 4. The `do-while` loop

A `do-while` loop runs the body **first** and checks the condition **after**. The body always runs at least once.

```cpp
int n = 10;
do {
    cout << "Runs once\n";
} while (n < 5);
```
Output:
```text
Runs once
```

The condition `n < 5` is false from the start, but the body still ran one time. A plain `while (n < 5)` would have printed nothing.

Remember the semicolon after `while ( )`. Leaving it out is a compile error.

`do-while` fits tasks that must happen once before you can check anything, such as asking the user for input:

```cpp
int n;
do {
    cout << "Enter a positive number: ";
    cin >> n;
} while (n <= 0);
```

It also counts digits correctly for `0`, because `0` has one digit and the body must run once. See [`do-while-loop.cpp`](do-while-loop.cpp).

## 5. Which loop should you use?

| | `for` | `while` | `do-while` |
|---|---|---|---|
| Condition checked | before each round | before each round | after each round |
| Runs at least | 0 times | 0 times | 1 time |
| Best when | you know the count | you repeat until something changes | the body must run once first |
| Example | print 1 to `n` | read numbers until `0` | menus, input checks |

Any loop can be written as any other. Choose the one that makes your intention clearest.

## 6. `break` and `continue`

- `break` leaves the loop immediately.
- `continue` skips the rest of the current round and moves on to the next one.

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        break;
    }
    cout << i << ' ';
}
// 1 2
```

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;
    }
    cout << i << ' ';
}
// 1 2 4 5
```

In a `for` loop, `continue` still runs the update (`i++`), so the loop keeps moving. In a `while` loop the update is usually inside the body. If `continue` jumps over it, the loop can get stuck forever:

```cpp
int i = 0;
while (i < 5) {
    if (i == 2) {
        continue;   // i++ below is skipped, so i stays 2 forever
    }
    i++;
}
```

See [`break-and-continue.cpp`](break-and-continue.cpp).

## 7. Nested loops

You can place a loop inside another loop. The inner loop runs **completely** for every round of the outer loop.

```cpp
for (int row = 1; row <= 3; row++) {
    for (int col = 1; col <= row; col++) {
        cout << "* ";
    }
    cout << '\n';
}
```
Output:
```text
* 
* * 
* * * 
```

A `break` inside the inner loop leaves only the inner loop. The outer loop keeps going.

See [`nested-loops.cpp`](nested-loops.cpp).

## 8. Infinite loops

A loop whose condition never becomes false runs forever.

```cpp
int i = 1;
while (i <= 5) {
    cout << i << ' ';   // i never changes, so the loop never ends
}
```

If your program gets stuck, press **Ctrl + C** in the terminal to stop it.

Sometimes an infinite loop is on purpose. `while (true)` and `for (;;)` have no way to end by themselves, so you leave them with `break`:

```cpp
int n;
while (true) {
    cout << "Enter a positive number: ";
    cin >> n;
    if (n > 0) {
        break;
    }
}
```

**Careful with input.** If the user types a letter instead of a number, `cin` fails and stops reading. The variable becomes `0`, so `n > 0` is never true, and the loop above (and the `do-while` loop in the complete example) repeats forever. Checking for bad input is a topic for later.

See [`infinite-loop-with-break.cpp`](infinite-loop-with-break.cpp).

## Complete example

Ask for a positive number with a `do-while` loop, then add the numbers from `1` to that number with a `for` loop.

See [`loops.cpp`](loops.cpp).

Example run:
```text
Enter a positive number: 5
Sum: 15
```
Example with invalid input first:
```text
Enter a positive number: -3
Enter a positive number: 0
Enter a positive number: 4
Sum: 10
```

### More examples in this folder

| File | What it shows |
|---|---|
| [`for-loop.cpp`](for-loop.cpp) | Print `1` to `n` with `for` |
| [`for-loop-variations.cpp`](for-loop-variations.cpp) | Counting down, stepping by 2, and a running sum |
| [`while-loop.cpp`](while-loop.cpp) | Counting with `while`, and reading numbers until `0` |
| [`do-while-loop.cpp`](do-while-loop.cpp) | A body that always runs once, and counting digits |
| [`break-and-continue.cpp`](break-and-continue.cpp) | Leaving a loop and skipping a round |
| [`nested-loops.cpp`](nested-loops.cpp) | A star triangle with two loops |
| [`infinite-loop-with-break.cpp`](infinite-loop-with-break.cpp) | `while (true)` that ends with `break` |

These programs read their values with `cin`, so you can try your own numbers.

## Common mistakes

| Mistake | What happens | Correct idea |
|---|---|---|
| `for (int i = 1; i <= 3; i++);` | The `;` is the whole loop body, so the block after it runs only once | Remove the semicolon |
| Forgetting the update in a `while` loop | The condition never changes, so the loop never ends | Change a variable inside the loop |
| `for (int i = 0; i <= 5; i++)` to repeat 5 times | It runs 6 times (`0` to `5`). This is an off-by-one error | Use `i < 5`, or start at `1` with `i <= 5` |
| `while (x = 1)` | `=` assigns, so the condition is always true | Use `==` to compare |
| No `;` after `do { } while (...)` | Compile error: `expected ';'` | Write `while (condition);` |
| Using `i` after a `for` loop | Compile error: `'i' was not declared in this scope` | Declare the variable before the loop if you need it later |
| `continue` before the update in a `while` loop | The update is skipped and the loop can get stuck | Update before `continue`, or use a `for` loop |
| Computing `13!` with `int` | The result does not fit in an `int` | Use `long long`, which holds up to `20!` |

Compile with warnings turned on to catch some of these:
```bash
g++ -std=c++17 -Wall -Wextra your-file.cpp -o your-file
```

## Compile and run

### Windows (MSYS2 UCRT64 / MinGW)
```bash
g++ -std=c++17 loops.cpp -o loops.exe
./loops.exe
```

### Linux / macOS
```bash
g++ -std=c++17 loops.cpp -o loops
./loops
```

## Practice

Open [`practice.md`](practice.md) for exercises.

## Key takeaway

Loops repeat code while a condition is true. Use `for` when you know the count, `while` when you repeat until something changes, and `do-while` when the body must run at least once. Always make sure the loop can end, and double-check your start and end values to avoid off-by-one mistakes.

## Instagram

Companion carousel: **C++ Fundamentals 06 — Loops (`for`, `while`, `do-while`)**  
Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)
