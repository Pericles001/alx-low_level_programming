0x12. C - Singly linked lists
=============================

-   By Julien Barbier
-   Ongoing project - started 10-07-2021, must end by 10-08-2021 (in about 9 hours) - you're done with 0% of tasks.
-   Checker was released at 10-07-2021 06:00 PM
-   QA review fully automated.

Concepts
--------

*For this project, students are expected to look at this concept:*

-   [Data Structures](https://alx-intranet.hbtn.io/concepts/120)

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif)

Resources
---------

**Read or watch**:

-   [Linked Lists](https://alx-intranet.hbtn.io/rltoken/joxg32-tt4lUh8Afgst8tA "Linked Lists")
-   [Google](https://alx-intranet.hbtn.io/rltoken/USaZbNdfcuIFII-K2YPsKQ "Google")
-   [Youtube](https://alx-intranet.hbtn.io/rltoken/epKUCIcoA6XaN1T3Vtr_9w "Youtube")

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/-nidxOqh9IU1Kx0WXKHY5Q "explain to anyone"), **without the help of Google**:

### General

-   When and why using linked lists vs arrays
-   How to build and use linked lists

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
-   You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
-   Don't forget to push your header file
-   All your header files should be include guarded

More Info
---------

Please use this data structure for this project:

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

```

--
