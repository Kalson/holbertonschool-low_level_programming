# C - Variadic functions
Write a function that returns the sum of all its parameters.

Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0
julien@ubuntu:~/0x0f. variadic functions$ cat 0-main.c
#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-sum_them_all.c -o a
julien@ubuntu:~/0x0f. variadic functions$ ./a 
1122
500
julien@ubuntu:~/0x0f. variadic functions$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0F-variadic_functions
File: 0-sum_them_all.c
Check your code?
  Done?  
Who is done?   Help!
1. To be is to be the value of a variable mandatory

Write a function that prints numbers, followed by a new line.

Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between numbers
and n is the number of integers passed to the function
You are allowed to use printf
If separator is NULL, don't print it
Print a new line at the end of your function
julien@ubuntu:~/0x0f. variadic functions$ cat 1-main.c
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_numbers.c -o b
julien@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
julien@ubuntu:~/0x0f. variadic functions$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0F-variadic_functions
File: 1-print_numbers.c
Check your code?
  Done?  
Who is done?   Help!
2. One woman's constant is another woman's variable mandatory

Write a function that prints strings, followed by a new line.

Prototype: void print_strings(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between the strings
and n is the number of strings passed to the function
You are allowed to use printf
If separator is NULL, don't print it
If one of the string is NULL, print (nil) instead
Print a new line at the end of your function
julien@ubuntu:~/0x0f. Variadic functions$ cat 2-main.c#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_strings.c -o c
julien@ubuntu:~/0x0f. Variadic functions$ ./c 
Jay, Django
julien@ubuntu:~/0x0f. Variadic functions$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0F-variadic_functions
File: 2-print_strings.c
Check your code?
  Done?  
Who is done?   Help!
3. To be is a to be the value of a variable mandatory

Write a function that prints anything.