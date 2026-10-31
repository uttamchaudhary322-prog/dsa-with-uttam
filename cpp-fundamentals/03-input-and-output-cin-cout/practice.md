# Practice: Input and Output (`cin`, `cout`)

Complete these without looking at a solution first. Compile and test each program locally.

## Exercise 1 - Add two integers
Read two integers and print their sum.
```text
Input:
12 5
Output:
Sum = 17
```

## Exercise 2 - Personal introduction
Read a full name using `std::getline()` and an age using `std::cin`. Print both.
```text
Enter your full name: Ada Lovelace
Enter your age: 28
Name: Ada Lovelace
Age: 28
```
Try both input orders. Be careful when combining `operator>>` and `std::getline()`.

## Exercise 3 - Rectangle area
Read width and height as `double`. Print the area (`width * height`).
Test with `4.5 2`. Expected area: `9`.

## Exercise 4 - Formatted output
Read a `double` and print it with exactly two digits after the decimal point. Hint: include `<iomanip>`, `std::fixed`, and `std::setprecision(2)`.

## Self-check
- [ ] I can explain `<<` and `>>`.
- [ ] I can read two values in one statement.
- [ ] I can print values and expressions.
- [ ] I know when to use `std::getline()`.
- [ ] I can handle the leftover newline when mixing input styles.
