# Practice: Arrays and Basic Array Operations

Complete these without looking at a solution first. Compile and test each program locally.

## Exercise 1 - Print in reverse
Read `n` and then `n` numbers. Print them in reverse order **without** changing the array.
```text
Input:
5
1 2 3 4 5
Output:
5 4 3 2 1
```

## Exercise 2 - Sum and average
Read `n` numbers and print their sum and average.
```text
Input:
4
1 2 3 4
Output:
Sum: 10
Average: 2.5
```
Test with `3` numbers `1 2 2` (average `1.66667`). Why must you cast to `double`?

## Exercise 3 - Largest and smallest
Read `n` numbers and print the largest and the smallest.
```text
Input:
5
-3 7 -10 2 7
Output:
Largest: 7
Smallest: -10
```
Test with all negative numbers, such as `-5 -2 -9`. Expected: `Largest: -2`, `Smallest: -9`.

## Exercise 4 - Count even and odd
Read `n` numbers and print how many are even and how many are odd.
```text
Input:
5
1 2 3 4 6
Output:
Even: 3
Odd: 2
```

## Exercise 5 - Linear search
Read `n` numbers and a target. Print the index of the first match, or `Not found`.
```text
Input:
5
4 8 15 16 23
15
Output:
Found at index 2
```
Test with `99` (`Not found`).

## Exercise 6 - Count occurrences
Read `n` numbers and a target. Print how many times the target appears.
```text
Input:
6
2 5 2 7 2 9
2
Output:
3
```

## Exercise 7 - Reverse in place
Read `n` numbers, reverse the array **in place** with swaps, and print it.
```text
Input:
5
1 2 3 4 5
Output:
5 4 3 2 1
```
Test with an even size (`4` numbers) and with `1` number. Then change `n / 2` to `n` in the loop and see what goes wrong.

## Exercise 8 - Is it sorted?
Read `n` numbers and print `Sorted` if they are in non-decreasing order, otherwise `Not sorted`.
```text
Input:
5
1 2 2 5 9
Output:
Sorted
```
Test with `3 1 2` (`Not sorted`) and with a single number (`Sorted`).

## Exercise 9 - Running sum
Change the array so that each element holds the sum of itself and everything before it. Print the result.
```text
Input:
5
1 2 3 4 5
Output:
1 3 6 10 15
```

## Exercise 10 - Functions with arrays
Write `int sumOf(const int arr[], int n)` and `int largestOf(const int arr[], int n)`. Use them in `main` to print the sum and the largest.
```text
Input:
5
3 9 2 7 1
Output:
Sum: 22
Largest: 9
```

## Exercise 11 - Predict, then run
Write down the output of each program before you run it.

**A**
```cpp
int a[4] = {5, 10, 15, 20};
cout << a[1] + a[3];
```

**B**
```cpp
int b[5] = {1, 2};
cout << b[4];
```

**C**
```cpp
int c[3] = {1, 2, 3};
for (int i = 0; i < 3; i++) {
    c[i] *= c[i];
}
for (int i = 0; i < 3; i++) {
    cout << c[i] << ' ';
}
```

**D**
```cpp
int d[] = {4, 8, 2};
cout << sizeof(d) / sizeof(d[0]);
```

**E**
```cpp
int e[5] = {1, 2, 3, 4, 5};
int s = 0;
for (int i = 1; i < 5; i += 2) {
    s += e[i];
}
cout << s;
```

Check your predictions:
```text
A: 30
B: 0
C: 1 4 9
D: 3
E: 6
```

## Challenge - Second largest
Read `n` numbers and print the second largest **distinct** value. Do not sort the array.
```text
Input:
5
5 9 9 3 7
Output:
7
```
Think about what to do when the largest value appears twice, as `9` does here.

## LeetCode practice (optional)
- [1480. Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/) - Easy. It is Exercise 9 as a function.
- [1929. Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/) - Easy. Build a new array twice as long, and fill it with one loop.
- [485. Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/) - Easy. Keep a counter that grows on `1` and resets on `0`, and remember the best value.

These are function-based problems: you write one function and return the answer instead of reading input. They receive the array as a `vector<int>`, which comes in the vectors lesson. It works like an array with `nums[i]` and `nums.size()`, so you can try them now or return to them later.

Tried it yourself? Compare your approach with the C++ solutions in the [`leetcode-solution`](../../leetcode-solution/README.md) folder as they are added.

## Self-check
- [ ] I can declare and initialize an array.
- [ ] I know that indexes start at `0` and end at `size - 1`.
- [ ] I can loop over an array with `i < n`.
- [ ] I can find the sum, largest, and smallest.
- [ ] I can search for a value in an array.
- [ ] I can reverse an array in place.
- [ ] I can pass an array and its size to a function.
- [ ] I know why going out of bounds is dangerous.
