# Practice: Strings and String Operations

Complete these without looking at a solution first. Compile and test each program locally.

## Exercise 1 - Length, first, and last
Read a word and print its length, its first character, and its last character.
```text
Input:
hello
Output:
Length: 5
First: h
Last: o
```

## Exercise 2 - Reverse a string
Read a word and print it reversed.
```text
Input:
hello
Output:
olleh
```
Test with `a` (`a`) and `abcd` (`dcba`).

## Exercise 3 - Palindrome
Read a word and print `Palindrome` or `Not a palindrome`.
```text
Input:
level
Output:
Palindrome
```
Test with `abba` (`Palindrome`), `hello` (`Not a palindrome`), and a single letter (`Palindrome`).

## Exercise 4 - Count vowels and consonants
Read a word and print how many vowels and consonants it has. Handle uppercase and lowercase.
```text
Input:
Education
Output:
Vowels: 5
Consonants: 4
```

## Exercise 5 - Count a character
Read a word and a character. Print how many times the character appears.
```text
Input:
banana a
Output:
3
```

## Exercise 6 - Uppercase and lowercase
Read a word and print it in uppercase and in lowercase. Use `toupper` and `tolower`.
```text
Input:
Hello123
Output:
HELLO123
hello123
```

## Exercise 7 - Letters, digits, and spaces
Read a full line with `getline`. Print how many letters, digits, and spaces it has.
```text
Input:
Hello World 2026
Output:
Letters: 10
Digits: 4
Spaces: 2
```

## Exercise 8 - Swap the case
Read a line and swap the case of every letter.
```text
Input:
Hello World
Output:
hELLO wORLD
```

## Exercise 9 - Compare ignoring case
Read two words. Print `Same` if they match when you ignore uppercase and lowercase, otherwise `Different`.
```text
Input:
Hello hELLO
Output:
Same
```

## Exercise 10 - Initials
Read a full name with `getline` and print the initials in uppercase.
```text
Input:
Uttam Kumar Chaudhary
Output:
UKC
```

## Exercise 11 - Predict, then run
Write down the output of each program before you run it.

**A**
```cpp
string s = "hello";
cout << s[1] << s.length();
```

**B**
```cpp
string a = "ab", b = "cd";
cout << a + b + "!";
```

**C**
```cpp
string s = "hello world";
cout << s.substr(6, 3);
```

**D**
```cpp
string a = "apple", b = "Banana";
cout << (a < b);
```

**E**
```cpp
string s = "abc";
s[1] = 'X';
cout << s;
```

Check your predictions:
```text
A: e5
B: abcd!
C: wor
D: 0
E: aXc
```
For D, remember that uppercase letters come before lowercase ones.

## Challenge - Count the words
Read a full line and print the number of words. Words are separated by one or more spaces, and the line may start or end with spaces.
```text
Input:
  hello   world  
Output:
2
```
Hint: count each time you move from a space to a non-space character.

## LeetCode practice (optional)
- [709. To Lower Case](https://leetcode.com/problems/to-lower-case/) - Easy. Loop over the string and change the uppercase letters. You can use `tolower`, or do it yourself with the character codes.
- [58. Length of Last Word](https://leetcode.com/problems/length-of-last-word/) - Easy. Start from the end, skip the trailing spaces, then count the letters.
- [1768. Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/) - Easy. Walk through both strings with one index and add one character from each in turn. Then add what is left of the longer one.

These are function-based problems: you write one function and return the answer instead of reading input.

Tried it yourself? Compare your approach with the C++ solutions in the [`leetcode-solution`](../../leetcode-solution/README.md) folder as they are added.

## Self-check
- [ ] I can declare, print, and change a `string`.
- [ ] I can use `length()` and index a string from `0`.
- [ ] I know the difference between `cin >>` and `getline`.
- [ ] I know why `getline` can read an empty line after `cin >>`.
- [ ] I can join and compare strings.
- [ ] I know the difference between `'a'` and `"a"`.
- [ ] I can use `substr` and `find`.
- [ ] I can reverse a string and check for a palindrome.
