0x11. C - printf 
Background Context

Write your own printf function.

Requirements

General

Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

The prototypes of all your functions should be included in your header file called main.h

Don’t forget to push your header file

All your header files should be include guarded

Note that we will not provide the _putchar function for this project

Compilation

Your code will be compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

Our main files will include your main header file (main.h): #include main.h

You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf
