*This activity has been created as part of the 42 curriculum by fabo-ome*

# ft_printf

## Description

`ft_printf` is a 42 project where I recreate the `printf()` function from the C standard library.

The goal of the project is to understand how formatted output works and how variadic arguments can be handled using `va_list`.

The mandatory conversions are:

`%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`

The project produces a static library called `libftprintf.a`.

## Instructions

Build the library:

```bash
make
```

Other available commands:

```bash
make clean
make fclean
make re
```

To use the library in another program:

```bash
cc main.c libftprintf.a
```

Include the header:

```c
#include "ft_printf.h"
```

## How It Works

`ft_printf()` goes through the format string one character at a time.

When it finds `%`, it checks the following character and calls the corresponding function.

For example:

```text
%d → print an integer
%s → print a string
%x → print hexadecimal
```

Variadic arguments are handled using `va_list`, `va_start`, `va_arg`, and `va_end`.

For hexadecimal and integer conversions, the number is broken down using division and remainders. Recursive functions are used to print the digits in the correct order.

The project mainly uses the format string, `va_list`, and character arrays for hexadecimal conversion.

## Resources

* The C manual pages (`man`) for functions and concepts used in the project.
* Articles and explanations from GeeksforGeeks.
* Discussions and explanations with my friends.
* The 42 `ft_printf` project subject.

### AI Usage

AI was used as a tool to understand concepts throughout the project. It helped me learn and understand variadic functions, `va_list`, `va_arg`, `va_end`, recursion, static libraries, and other C programming concepts related to the project.

