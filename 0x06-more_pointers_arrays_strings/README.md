0x06. C - More pointers, arrays and strings
===========================================

-   By Julien Barbier

![](https://alx-intranet.hbtn.io/images/contents/low_level_programming/projects/happy-clapping.gif)

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

### 0\. strcat

mandatory

Write a function that concatenates two strings.

-   Prototype: `char *_strcat(char *dest, char *src);`
-   This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
-   Returns a pointer to the resulting string `dest`

FYI: The standard library provides a similar function: `strcat`. Run `man strcat` to learn more.

```
julien@ubuntu:~/0x06$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
julien@ubuntu:~/0x06$ ./0-strcat
Hello
World!
Hello World!
World!
Hello World!
julien@ubuntu:~/0x06$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x06-pointers_arrays_strings`
-   File: `0-strcat.c`

 Done? Help

### 1\. strncat

mandatory

Write a function that concatenates two strings.

-   Prototype: `char *_strncat(char *dest, char *src, int n);`
-   The `_strncat` function is similar to the `_strcat` function, except that
    -   it will use at most `n` bytes from `src`; and
    -   `src` does not need to be null-terminated if it contains `n` or more bytes
-   Return a pointer to the resulting string `dest`

FYI: The standard library provides a similar function: `strncat`. Run `man strncat` to learn more.

```
julien@ubuntu:~/0x06$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat
julien@ubuntu:~/0x06$ ./1-strncat
Hello
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
julien@ubuntu:~/0x06$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x06-pointers_arrays_strings`
-   File: `1-strncat.c`

 Done? Help

### 2\. strncpy

mandatory

Write a function that copies a string.

-   Prototype: `char *_strncpy(char *dest, char *src, int n);`

-   Your function should work exactly like `strncpy`

FYI: The standard library provides a similar function: `strncpy`. Run `man strncpy` to learn more.

```
julien@ubuntu:~/0x06$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy
julien@ubuntu:~/0x06$ ./2-strncpy
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
julien@ubuntu:~/0x06$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x06-pointers_arrays_strings`
-   File: `2-strncpy.c`

 Done? Help

### 3\. strcmp

mandatory

Write a function that compares two strings.

-   Prototype: `int _strcmp(char *s1, char *s2);`
-   Your function should work exactly like `strcmp`

FYI: The standard library provides a similar function: `strcmp`. Run `man strcmp` to learn more.

```
julien@ubuntu:~/0x06$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp
julien@ubuntu:~/0x06$ ./3-strcmp
-15
15
0
julien@ubuntu:~/0x06$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x06-pointers_arrays_strings`
-   File: `3-strcmp.c`

 Done? Help

### 4\. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

mandatory

Write a function that reverses the content of an array of integers.

-   Prototype: `void reverse_array(int *a, int n);`
-   Where `n` is the number of elements of the array

```
julien@ubuntu:~/0x06$ cat 4-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-rev_array.c -o 4-rev_array
julien@ubuntu:~/0x06$ ./4-rev_array
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
julien@ubuntu:~/0x06$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x06-pointers_arrays_strings`
-   File: `4-rev_array.c`

 Done? Help

### 5\. Always look up

mandatory

Write a function that changes all lowercase letters of a string to uppercase.

-   Prototype: `char *string_toupper(char *);`

```
julien@ubuntu:~/0x06$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper
julien@ubuntu:~/0x06$ ./5-string_toupper
LOOK UP!
LOOK UP!
julien@ubuntu:~/0x06$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x06-pointers_arrays_strings`
-   File: `5-string_toupper.c`

 Done? Help

### 6\. Expect the best. Prepare for the worst. Capitalize on what comes

mandatory

Write a function that capitalizes all words of a string.

-   Prototype: `char *cap_string(char *);`
-   Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`

```
julien@ubuntu:~/0x06$ cat 6-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap
julien@ubuntu:~/0x06$ ./6-cap
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
julien@ubuntu:~/0x06$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x06-pointers_arrays_strings`
-   File: `6-cap_string.c`

 Done? Help

### 7\. Mozart composed his music not for the elite, but for everybody

mandatory

Write a function that encodes a string into [1337](https://alx-intranet.hbtn.io/rltoken/9v9KfpvWnL0GoMu5mozbug "1337").

-   Letters `a` and `A` should be replaced by `4`

-   Letters `e` and `E` should be replaced by `3`

-   Letters `o` and `O` should be replaced by `0`

-   Letters `t` and `T` should be replaced by `7`

-   Letters `l` and `L` should be replaced by `1`

-   Prototype: `char *leet(char *);`
-   You can only use one `if` in your code
-   You can only use two loops in your code
-   You are not allowed to use `switch`
-   You are not allowed to use any ternary operation

```
julien@ubuntu:~/0x06$ cat 7-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-leet.c -o 7-1337
julien@ubuntu:~/0x06$ ./7-1337
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
julien@ubuntu:~/0x06$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x06-pointers_arrays_strings`
-   File: `7-leet.c`
