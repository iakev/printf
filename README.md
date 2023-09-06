# Printf

## Table of Contents
- [Introduction](#introduction)
- [Getting Started](#getting-started)
- [Program Listing](#program-listing)
- [How to Use](#how-to-use)
- [Contributing](#contributing)
- [License](#license)

## Introduction
[Printf](https://github.com/iakev/printf) is a custom implementation of the `printf` function in C. It provides a flexible and extensible way to format and print text in your C programs.

## Getting Started
To get started with `printf`, follow these steps:

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/iakev/printf.git
   ```
2. Compile the `printf` library:

   ```bash
   gcc -Wall -Werror -Wextra -pedantic *.c -o libprintf.a
   ````

3. Link the library to your C program:

   ```bash
   gcc -Wall -Werror -Wextra -pedantic your_program.c -L. -lprintf -o your_program
   ```

## Program Listing

Here's a list of the programs included in this repository:

- `printf.c`: The core implementation of the printf function.
- `holberton.h`: The header file containing function prototypes and necessary includes.
- `main.c`: An example C program that demonstrates the usage of `printf`.
  


## How to use

To use the `printf` function in your C programs, include the `holberton.h` header file and call `printf` with the desired format string and arguments, just like you would with the standard `printf` function.

```c
#include "holberton.h"

int main(void)
{
    int number = 42;
    printf("The answer is %d\n", number);
    return (0);
}
```

# Contributing

Contributions are welcome! If you'd like to contribute to this project, please follow these guidelines:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and test them thoroughly.
4. Create a pull request with a clear description of your changes.

# Author

[Kevin Kirimi Mwongera](kirimikmwongera@gmail.com)


# License

This project is licensed under the MIT License. See the [LICENSE](https://github.com/iakev/printf/blob/main/LICENSE.md) file for details.
