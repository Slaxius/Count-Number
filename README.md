# Count Odd and Even Numbers

A small console program I made while learning C. It asks for the first and last numbers in a range, then displays the full range and separates the even and odd numbers.

This is a simple personal learning project, not a university course project.

## What it does

- Prints every integer from the first number through the last number, inclusive.
- Lists the even numbers in that range.
- Lists the odd numbers in that range.

## Build and run

The source file is named `Count ODD and EVEN Numbers.cpp`, but it uses C (`stdio.h`) and can be compiled as C with GCC. From the project directory:

```sh
gcc -x c "Count ODD and EVEN Numbers.cpp" -o count_numbers
./count_numbers
```

On Windows, run the generated executable with:

```powershell
gcc -x c "Count ODD and EVEN Numbers.cpp" -o count_numbers.exe
.\count_numbers.exe
```

When prompted, enter the first number and then the last number. The program expects integer input and an ascending range.

## Learning notes

This project is for practicing basic input and output, integer ranges, `for` loops, and checking odd or even numbers with the remainder operator (`%`).
