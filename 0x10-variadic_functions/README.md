0x10. C - Variadic functions
============================

-   By Julien Barbier
-   Ongoing project - started 09-30-2021, must end by 10-01-2021 (in about 4 hours) - you're done with 0% of tasks.
-   Checker was released at 09-30-2021 06:00 PM
-   QA review fully automated.

Resources
---------

**Read or watch**:

-   [stdarg.h](https://alx-intranet.hbtn.io/rltoken/wLRJdO8pA2-Vb-rF2Y71sA "stdarg.h")
-   [Variadic Functions](https://alx-intranet.hbtn.io/rltoken/3gW8GycmyjarbJR76FkrzA "Variadic Functions")
-   [Const Keyword](https://alx-intranet.hbtn.io/rltoken/_RRPCY32VODyN_r2HIEnBQ "Const Keyword")

**man or help**:

-   `stdarg`

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/QhsjfwBH5C7EriBICg67sQ "explain to anyone"), **without the help of Google**:

### General

-   What are variadic functions
-   How to use `va_start`, `va_arg` and `va_end` macros
-   Why and how to use the `const` type qualifier

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc... is forbidden
-   You are allowed to use the following macros: `va_start`, `va_arg` and `va_end`
-   You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `variadic_functions.h`
-   Don't forget to push your header file
-   All your header files should be include guarded
