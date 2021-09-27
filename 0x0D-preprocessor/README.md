0x0D. C - Preprocessor
======================

-   By Julien Barbier & Johan Euphrosine, Software Engineer at Google
-   Ongoing project - started 09-27-2021, must end by 09-28-2021 (in about 16 hours) - you're done with 0% of tasks.
-   Checker will be released at 09-27-2021 06:00 PM
-   QA review fully automated.

Resources
---------

**Read or watch**:

-   [Understanding C program Compilation Process](https://alx-intranet.hbtn.io/rltoken/73Xp4zJlc-orfeEzmlYVDg "Understanding C program Compilation Process")
-   [Object-like Macros](https://alx-intranet.hbtn.io/rltoken/kaqIw352MSJ8xoi1xU09ZA "Object-like Macros")
-   [Macro Arguments](https://alx-intranet.hbtn.io/rltoken/wcQZzunlgjepxExZFc2ORQ "Macro Arguments")
-   [Pre Processor Directives in C](https://alx-intranet.hbtn.io/rltoken/S4zfCHzg82fUAxdt8_SaZQ "Pre Processor Directives in C")
-   [The C Preprocessor](https://alx-intranet.hbtn.io/rltoken/G33GiOIZofiIN4Tx9_acbQ "The C Preprocessor")
-   [Standard Predefined Macros](https://alx-intranet.hbtn.io/rltoken/0OYhpL2cJfsIMBWhTuZsAA "Standard Predefined Macros")
-   [include guard](https://alx-intranet.hbtn.io/rltoken/oF2vgIZNePdU965jCEZLHA "include guard")
-   [Common Predefined Macros](https://alx-intranet.hbtn.io/rltoken/ROl5xAMKX-JpenEqmf7FnQ "Common Predefined Macros")

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/OnMlvyxq0Mzr-7GHRPI9tQ "explain to anyone"), **without the help of Google**:

### General

-   What are macros and how to use them
-   What are the most common predefined macros
-   How to include guard your header files

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
-   Don't forget to push your header file
-   All your header files should be include guarded
