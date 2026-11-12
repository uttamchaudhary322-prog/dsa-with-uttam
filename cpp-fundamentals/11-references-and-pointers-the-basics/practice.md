# Practice: References and Pointers, The Basics

Complete these without looking at a solution first. Compile and test each program locally.

## Exercise 1 - Reference as a nickname
Create `int x = 10;` and `int& r = x;`. Set `r = 25`, then print `x` and `r`.
```text
Output:
25 25
```

## Exercise 2 - Swap with references
Write `void swapRef(int& a, int& b)`. Read two numbers, swap them, and print them.
```text
Input:
3 8
Output:
8 3
```

## Exercise 3 - Why the swap failed
Write a `swapValue(int a, int b)` that takes plain values. Call it and print the numbers. Explain in a comment why nothing changed.
```text
Input:
3 8
Output:
3 8
```

## Exercise 4 - Increment function
Write `void addOne(int& n)`. Call it three times on `n = 0` and print `n`.
```text
Output:
3
```

## Exercise 5 - Pointer basics
Create `int x = 5;` and `int* p = &x;`. Print `*p`, then set `*p = 50` and print `x`.
```text
Output:
5
50
```

## Exercise 6 - Swap with pointers
Write `void swapPtr(int* a, int* b)`. Read two numbers, swap them by passing their addresses, and print them.
```text
Input:
3 8
Output:
8 3
```

## Exercise 7 - Min and max through references
Write `void minMax(const vector<int>& v, int& smallest, int& largest)`. Read `n` numbers and print the two results.
```text
Input:
5
4 9 -2 7 1
Output:
Smallest: -2
Largest: 9
```
Note: the function gives back **two** answers through its reference parameters.

## Exercise 8 - Safe pointer
Write a function `void printValue(const int* p)` that prints the value, or prints `null` when `p` is `nullptr`. Call it with `&x` and with `nullptr`.
```text
Output:
42
null
```

## Exercise 9 - Array with a pointer
Create `int arr[5] = {2, 4, 6, 8, 10};`. Use an `int*` that starts at `arr` to print every element and the sum. Do not use `[]`.
```text
Output:
2 4 6 8 10
Sum: 30
```

## Exercise 10 - Double a vector
Write `void doubleAll(vector<int>& v)` that doubles every element. Why does it need `&`? Test it with `{1, 2, 3}`.
```text
Output:
2 4 6
```

## Challenge - Reverse with two pointers
Write `void reverseArray(int* left, int* right)` that reverses an array by swapping `*left` and `*right`, then moving the pointers toward each other until they meet.
```text
Input array: 1 2 3 4 5
Output: 5 4 3 2 1
```

## Challenge - Find the pointer bug
This code prints `10 20` instead of changing the values. Find the reason and fix it.
```cpp
void setBoth(int a, int b) {
    a = 100;
    b = 200;
}

int main() {
    int x = 10, y = 20;
    setBoth(x, y);
    cout << x << ' ' << y;
}
```
Output after the fix: `100 200`

## Related practice
After finishing the exercises, try these LeetCode problems:

| Problem | Why it fits |
|---|---|
| [344. Reverse String](https://leetcode.com/problems/reverse-string/) | The two-pointer idea, with indexes |
| [283. Move Zeroes](https://leetcode.com/problems/move-zeroes/) | In-place changes to a vector |
| [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | Two indexes walking one array |
