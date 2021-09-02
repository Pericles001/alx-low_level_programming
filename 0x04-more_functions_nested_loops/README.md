0x04. C - More functions, more nested loops
===========================================

-   By Julien Barbier


Resources
---------

**Read or watch**:

-   [Nested while loops](https://alx-intranet.hbtn.io/rltoken/aDRkFzUkVysnD94Dpm3w5g "Nested while loops")
-   [C - Functions](https://alx-intranet.hbtn.io/rltoken/zf4IZeoe0yFZL2X7_nznQQ "C - Functions")
-   [Learning to Program in C (Part 06)](https://alx-intranet.hbtn.io/rltoken/iQ87CI4Lf41U_uRh9QsoQA "Learning to Program in C (Part 06)") (*stop at 14:00*)
-   [What is the purpose of a function prototype?](https://alx-intranet.hbtn.io/rltoken/pUXhvD6-xl5BbWyj1AhCEA "What is the purpose of a function prototype?")
-   [C - Header Files](https://alx-intranet.hbtn.io/rltoken/IFY075ffrszSJvHqPAa-zQ "C - Header Files") (*stop before the "Once-Only Headers" paragraph*)

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/qxo8nrqjGy1G9N_n87yE4g "explain to anyone"), **without the help of Google**:

### General

-   What are nested loops and how to use them
-   What is a function and how do you use functions
-   What is the difference between a declaration and a definition of a function
-   What is a prototype
-   Scope of variables
-   What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`
-   What are header files and how to to use them with `#include`

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc... is forbidden
-   You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
-   Don't forget to push your header file

Tasks
-----

### 0\. isupper

mandatory

Write a function that checks for uppercase character.

-   Prototype: `int _isupper(int c);`
-   Returns `1` if `c` is uppercase
-   Returns `0` otherwise

FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

```
julien@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper
A: 1
a: 0
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `0-isupper.c`

 Done? Help Check your code

### 1\. isdigit

mandatory

Write a function that checks for a digit (`0` through `9`).

-   Prototype: `int _isdigit(int c);`
-   Returns `1` if `c` is a digit
-   Returns `0` otherwise

FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

```
julien@ubuntu:~/0x04$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x04$ ./1-isdigit
0: 1
a: 0
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `1-isdigit.c`

 Done? Help Check your code

### 2\. Collaboration is multiplication

mandatory

Write a function that multiplies two integers.

-   Prototype: `int mul(int a, int b);`

```
julien@ubuntu:~/0x04$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/0x04$ ./2-mul
100352
-1646592
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `2-mul.c`

 Done? Help Check your code

### 3\. The numbers speak for themselves

mandatory

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

-   Prototype: `void print_numbers(void);`
-   You can only use `_putchar` twice in your code

```
julien@ubuntu:~/0x04$ cat 3-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
julien@ubuntu:~/0x04$ ./3-print_numbers | cat -e
0123456789$
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `3-print_numbers.c`

 Done? Help Check your code

### 4\. I believe in numbers and signs

mandatory

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

-   Prototype: `void print_most_numbers(void);`
-   Do not print `2` and `4`
-   You can only use `_putchar` twice in your code

```
julien@ubuntu:~/0x04$ cat 4-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
julien@ubuntu:~/0x04$ ./4-print_most_numbers
01356789
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `4-print_most_numbers.c`

 Done? Help Check your code

### 5\. Numbers constitute the only universal language

mandatory

Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.

-   Prototype: `void more_numbers(void);`
-   You can only use `_putchar` three times in your code

```
julien@ubuntu:~/0x04$ cat 5-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
julien@ubuntu:~/0x04$ ./5-more_numbers
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
julien@ubuntu:~/0x04

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `5-more_numbers.c`

 Done? Help Check your code

### 6\. The shortest distance between two points is a straight line

mandatory

Write a function that draws a straight line in the terminal.

-   Prototype: `void print_line(int n);`
-   You can only use `_putchar` function to print
-   Where `n` is the number of times the character `_` should be printed
-   The line should end with a `\n`
-   If `n` is `0` or less, the function should only print `\n`

```
julien@ubuntu:~/0x04$ cat 6-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
julien@ubuntu:~/0x04$ ./6-lines | cat -e
$
__$
__________$
$
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `6-print_line.c`

 Done? Help Check your code

### 7\. I feel like I am diagonally parked in a parallel universe

mandatory

Write a function that draws a diagonal line on the terminal.

-   Prototype: `void print_diagonal(int n);`
-   You can only use `_putchar` function to print
-   Where `n` is the number of times the character `\` should be printed
-   The diagonal should end with a `\n`
-   If `n` is `0` or less, the function should only print a `\n`

```
julien@ubuntu:~/0x04$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
julien@ubuntu:~/0x04$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `7-print_diagonal.c`

 Done? Help Check your code

### 8\. You are so much sunshine in every square inch

mandatory

Write a function that prints a square, followed by a new line.

-   Prototype: `void print_square(int size);`
-   You can only use `_putchar` function to print
-   Where `size` is the size of the square
-   If `size` is `0` or less, the function should print only a new line
-   Use the character `#` to print the square

```
julien@ubuntu:~/0x04$ cat 8-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
julien@ubuntu:~/0x04$ ./8-squares
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `8-print_square.c`

 Done? Help Check your code

### 9\. Fizz-Buzz

mandatory

The "Fizz-Buzz test" is an interview question designed to help filter out the 99.5% of programming job candidates who can't seem to program their way out of a wet paper bag.

Write a program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.

-   Each number or word should be separated by a space
-   You are allowed to use the standard library

```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
julien@ubuntu:~/0x04$ ./9-fizz_buzz
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `9-fizz_buzz.c`

 Done? Help Check your code Get a sandbox

### 10\. Triangles

mandatory

Write a function that prints a triangle, followed by a new line.

-   Prototype: `void print_triangle(int size);`
-   You can only use `_putchar` function to print
-   Where `size` is the size of the triangle
-   If `size` is `0` or less, the function should print only a new line
-   Use the character `#` to print the triangle

```
julien@ubuntu:~/0x04$ cat 10-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
julien@ubuntu:~/0x04$ ./10-triangles
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

julien@ubuntu:~/0x04$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `10-print_triangle.c`
