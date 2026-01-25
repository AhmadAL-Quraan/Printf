

## About
This project consists in duplicate the behavior of the C function `printf()`. It is not necessary to implement the buffer management of the original function. It must handle the following parameters:

- `char` type variables.
- `string` type variables.
- `int` type variables.
- `unsigned int` type variables.
- hexadecimal `int` type variables (uppercase and lowercase).
- `pointer` type variables.

You will find more details in the [subject of the project](https://github.com/PublioElio/School-42-printf/blob/main/printf.es.subject.pdf).



## Structure
The main obstacles during the execution of the project have been: handling a variable number of parameters and the function `ft_printf()` returning an `int`.

### `va_list`
To deal with the variable number of parameters entered, the macros `va_list`, `va_start`, `va_arg` and `va_end` have been used. The `ft_printf()` function calls the `ft_fotmat()` function when it finds the `%` sign among the entered parameters, then it checks the next character in the string to call one of the functions that print the different variable types. To use this macro, the libraryt `<stdarg.h>` is included in the `ft_printf.h`.

### Returning an integer
To handle the integer returned by `ft_printf()`, a pointer is given in the format printing functions. In this way, the function handles the number of characters printed before continuing with the string sent by parameter. Example:

```
void	ft_putchar(char c, int *cnt)
{
	write(1, &c, 1);
	(*cnt)++; // increasing the pointer with each character printed
}
```
## Formats
The different types of variables are printed using a function for each of the formats:

* `printf_utilization.c` prints `char` type variables and is called by each of the following functions to print the character strings one by one. Also, it is where the pointer returned by the `ft_printf()` function is incremented.
* `printf_main.c` p
* `ft_utostr.c` prints an `unsigned int` type variable. 
* `ft_pointer.c` prints a pointer, in hexadecimal format (lowercase), preceded by the string "0x".
* `ft_itoa.c` prints a `char *` type variable, calling `ft_putchar_pf()` in a `while` loop. It the string is `NULL`, it returns `"(null)"`.
* `ft_hex.c`  prints hexadecimal integers,  using a string included in the `ft_printf.h` library. There is one string for uppercase and one for lowercase characters.
* `ft_print_base.c` Printe the base of any value, by giving it the number and it's base.


## Requirements
The functions are written in __C language__ and need the `gcc` compiler, with `<stdlib.h>`, `<stdarg.h>` and `<unistd.h>` standard libraries to run.

# Instructions

## 1. Compiling the archives

To compile the proiect, go to its path and run:

For __mandatory__ functions:
```
$ make
```
## 2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:
```
$ make fclean
```

## 3. Using it in your code

To use this project in your code, simply include this header:
```
#include "ft_printf.h"
```


## 4. Run the main.c file using the libftprintf.a library.
```C
cc main.c libftprintf.a -o object_File && ./object_File
```


