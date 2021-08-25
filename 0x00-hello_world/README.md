0x00. C - Hello, World
======================

-   By Julien Barbier

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/212/cisfun.jpg)

Resources
---------

**Read or watch**:

-   [Everything you need to know to start with C.pdf](https://alx-intranet.hbtn.io/rltoken/Mt-kMhgTyVzA2i5SYsWBwQ "Everything you need to know to start with C.pdf") (*You do not have to learn everything in there yet, but make sure you read it entirely first*)
-   [Dennis Ritchie](https://alx-intranet.hbtn.io/rltoken/YWFrRob_-Yo-_NQikMLI-g "Dennis Ritchie")
-   ["C" Programming Language: Brian Kernighan](https://alx-intranet.hbtn.io/rltoken/W4oygfMgAp5Hyc7o6QuSYQ ""C" Programming Language: Brian Kernighan")
-   [Why C Programming Is Awesome](https://alx-intranet.hbtn.io/rltoken/WYdE1novaWa0yt5fzGvLBw "Why C Programming Is Awesome")
-   [Learning to program in C part 1](https://alx-intranet.hbtn.io/rltoken/aE_pZLbexuLroHA0FmjLbw "Learning to program in C part 1")
-   [Learning to program in C part 2](https://alx-intranet.hbtn.io/rltoken/3a5y1N-0FlTaPbKRxlRLlQ "Learning to program in C part 2")
-   [Understanding C program Compilation Process](https://alx-intranet.hbtn.io/rltoken/idYJyVfQRZ9e5aljiT5UKg "Understanding C program Compilation Process")
-   [Betty Coding Style](https://alx-intranet.hbtn.io/rltoken/Iu2Vb1CbDPMHuDJG1iILKA "Betty Coding Style")
-   [Hash-bang under the hood](https://alx-intranet.hbtn.io/rltoken/zwv5CHLybXN6KFmsjbu_tg "Hash-bang under the hood") (*Look at only after you finish consuming the other resources*)
-   [Linus Torvalds on C vs. C++](https://alx-intranet.hbtn.io/rltoken/JrokM8Pk6bd9wPqQvEfSAA "Linus Torvalds on C vs. C++") (*Look at only after you finish consuming the other resources*)

**man or help**:

-   `gcc`
-   `printf (3)`
-   `puts`
-   `putchar`

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/feOAhqRw7z0sSUKoD-91HA "explain to anyone"), **without the help of Google**:

### General

-   Why C programming is awesome
-   Who invented C
-   Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
-   What happens when you type `gcc main.c`
-   What is an entry point
-   What is `main`
-   How to print text using `printf`, `puts` and `putchar`
-   How to get the size of a specific type using the unary operator `sizeof`
-   How to compile using `gcc`
-   What is the default program name when compiling with `gcc`
-   What is the official C coding style and how to check your code with `betty-style`
-   How to find the right header to include in your source code when using a standard library function
-   How does the `main` function influence the return value of the program

Requirements
------------

### C

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file at the root of the repo, containing a description of the repository
-   A `README.md` file, at the root of the folder of *this* project, containing a description of the project
-   There should be no errors and no warnings during compilation
-   You are not allowed to use `system`
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")

### Shell Scripts

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your scripts will be tested on Ubuntu 20.04 LTS
-   All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
-   All your files should end with a new line
-   The first line of all your files should be exactly `#!/bin/bash`

More Info
---------

### Betty linter

To run the Betty linter just with command `betty <filename>`:

-   Go to the [Betty](https://alx-intranet.hbtn.io/rltoken/wQ4sMfsWfxvyfN67Sc11zA "Betty") repository
-   Clone the [repo](https://alx-intranet.hbtn.io/rltoken/wQ4sMfsWfxvyfN67Sc11zA "repo") to your local machine
-   `cd` into the Betty directory
-   Install the linter with `sudo ./install.sh`
-   `emacs` or `vi` a new file called `betty`, and copy the script below:

```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done

```

-   Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
-   Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

You can now type `betty <filename>` to run the Betty linter!
