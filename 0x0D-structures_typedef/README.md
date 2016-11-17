Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Django";
    my_dog.age = 3.5;
    my_dog.owner = "Jay";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ make
gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Django, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0D-structures_typedef
File: dog.h
Check your code? Ask a new correction
  Done?  
Who is done?   Help!
1. A dog is the only thing on earth that loves you more than you love yourself mandatory

Score: 85.71% (completion score: 85.71%)
Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Django", 3.5, "Jay");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Django, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0D-structures_typedef
File: 1-init_dog.c
Check your code? Ask a new correction
  Done?  
Who is done?   Help!
2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad mandatory

Score: 0.00% (completion score: 0.00%)
Write a function that prints a struct dog

Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.
julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Django";
    my_dog.age = 3.5;
    my_dog.owner = "Jay";
    print_dog(&my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Django
Age: 3.500000
Owner: Jay
julien@ubuntu:~/0x0d. structures, typedef$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0D-structures_typedef
File: 2-print_dog.c
Check your code? Ask a new correction
  Done?  
Who is done?   Help!
3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read mandatory

Score: 100.00% (completion score: 100.00%)
Define a new type dog_t as a new name for the type struct dog.

julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Django";
    my_dog.age = 3.5;
    my_dog.owner = "Jay";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Django, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0D-structures_typedef
File: dog.h
Check your code? Ask a new correction
  Done?  
Who is done?   Help!
4. A door is what a dog is perpetually on the wrong side of mandatory

Score: 0.00% (completion score: 0.00%)
Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails
julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Django", 3.5, "Jay");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Django, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0D-structures_typedef
File: 4-new_dog.c
Check your code? Ask a new correction
  Done?  
Who is done?   Help!
5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg mandatory

Score: 0.00% (completion score: 0.00%)
Write a function that frees dogs.

Prototype: void free_dog(dog_t *d);
julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Django", 3.5, "Jay");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Django, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0D-structures_typedef
File: 5-free_dog.c