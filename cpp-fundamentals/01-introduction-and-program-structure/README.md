# 01. Introduction to C++ and Program Structure

**Series:** C++ Fundamentals  
**Level:** Beginner  
**Language:** C++

## Goal
Understand the structure of a minimal C++ program and what each part does.

## Example program
```cpp
#include <iostream>

int main() {
    cout << "Hello, World!\n";
    return 0;
}
```

## Explanation

### 1. `#include <iostream>`
Includes standard input/output stream declarations, allowing the program to use tools such as `cout` and `cin`.

### 2. `int main()`
`main` is the entry point of a hosted C++ program. The `int` return type means it returns an integer status to the environment.

### 3. Braces `{ }`
The braces mark the beginning and end of the function body. Statements inside the braces are part of `main`.

### 4. `cout << "Hello, World!\n";`
- `cout` is the standard output stream.
- `<<` inserts data into the output stream.
- `"Hello, World!\n"` is a string literal. `\n` adds a newline.
- `;` terminates the statement.

### 5. `return 0;`
Returning zero from `main` conventionally indicates successful termination. If execution reaches the closing brace of `main` without a return statement, C++ treats it as returning zero.

## Expected output
```text
Hello, World!
```

## Compile and run

With `g++`:

**Linux / macOS**
```bash
g++ hello-world.cpp -o hello-world
./hello-world
```

**Windows (PowerShell / Command Prompt)**
```powershell
g++ hello-world.cpp -o hello-world.exe
.\hello-world.exe
```

If `g++` is not installed or is not on your PATH, install it using the instructions for your operating system below.

### Install GCC/G++

**Windows (MSYS2)**

Open PowerShell:
```powershell
winget install --id MSYS2.MSYS2 -e
```

Then open **MSYS2 UCRT64** from the Start menu and run:
```bash
pacman -Syu
pacman -S --needed mingw-w64-ucrt-x86_64-gcc
```

Use the **MSYS2 UCRT64** terminal to compile, or add `C:\msys64\ucrt64\bin` to your Windows `PATH`, then restart your terminal.

**Ubuntu / Debian Linux**
```bash
sudo apt update
sudo apt install build-essential
```

**Fedora Linux**
```bash
sudo dnf group install "Development Tools"
```

**Arch Linux**
```bash
sudo pacman -S base-devel
```

**macOS (Homebrew)**

Install [Homebrew](https://brew.sh/) if it is not already installed, then run:
```bash
brew install gcc
```

Homebrew may install versioned commands such as `g++-15`. Check the installed command with:
```bash
g++ --version
```

Verify the installation on any operating system:
```bash
g++ --version
```

## VS Code setup

1. Install [Visual Studio Code](https://code.visualstudio.com/).
2. Open VS Code and install the **C/C++** extension by Microsoft.
3. Open this repository with **File > Open Folder**.
4. Create a file named `hello-world.cpp` in this folder and add the example program from this README.
5. Open the VS Code integrated terminal with **Terminal > New Terminal**.
6. Confirm that the compiler is available:

```bash
g++ --version
```

7. Compile and run the program from the terminal:

**Linux / macOS**
```bash
g++ hello-world.cpp -o hello-world
./hello-world
```

**Windows**
```powershell
g++ hello-world.cpp -o hello-world.exe
.\hello-world.exe
```

The output should be:
```text
Hello, World!
```

If VS Code reports that `g++` is not recognized, restart VS Code after updating
your `PATH` and make sure the compiler's `bin` folder is included in `PATH`.

## Try it yourself
1. Change the message to your name.
2. Print two lines.
3. Remove the semicolon after the `cout` statement and compile again. Read the compiler error.
4. Explain what each line does without looking at this README.

## Key takeaway
Don't memorize the program as a magic template. Understand the role of the header, entry point, output statement, and return status.

## Instagram
Companion carousel: **C++ Fundamentals 01 — Introduction to C++ and Program Structure**  
Instagram: [@dsa.with.uttam](https://www.instagram.com/dsa.with.uttam/)
