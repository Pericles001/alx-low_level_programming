0x0B. C - malloc, free
======================

-   By Julien Barbier
-   Ongoing project - started 09-21-2021, must end by 09-22-2021 (in about 16 hours) - you're done with 0% of tasks.
-   Checker was released at 09-21-2021 06:00 AM
-   QA review fully automated.

Concepts
--------

*For this project, students are expected to look at this concept:*

-   [Automatic and dynamic allocation, malloc and free](https://alx-intranet.hbtn.io/concepts/62)

Resources
---------

**Read or watch**:

-   [0x0a - malloc & free - quick overview.pdf](https://alx-intranet.hbtn.io/rltoken/7q6RmWq86XkUhvmlhrg9bg "0x0a - malloc & free - quick overview.pdf")
-   [Dynamic memory allocation in C - malloc calloc realloc free](https://alx-intranet.hbtn.io/rltoken/pfGb2oVIYLO_1a8jtFGQYw "Dynamic memory allocation in C - malloc calloc realloc free") (*stop at 6:50*)

**man or help**:

-   `malloc`
-   `free`

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/2LjkSexDe-xcLQZ0f5ungQ "explain to anyone"), **without the help of Google**:

### General

-   What is the difference between automatic and dynamic allocation
-   What is `malloc` and `free` and how to use them
-   Why and when use `malloc`
-   How to use `valgrind` to check for memory leak

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
-   The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc... is forbidden
-   You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
-   Don't forget to push your header file