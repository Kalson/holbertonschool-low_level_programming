# C - argc, argv
Write a program that prints its name, followed by a new line.

If you rename the program, it will print the new name, without having to compile it again
You should not remove the path before the name of the program
You are allowed to use the standard library
julien@ubuntu:~/0x09. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x09. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x09. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x09. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x09. argc, argv$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x09-argc_argv
File: 0-whatsmyname.c
Check your code?
  Done?  
Who is done?   Help!
1. Silence is argument carried out by other means mandatory

Write a program that prints the number of arguments you passed to it.

Your program should print a number, followed by a new line
julien@ubuntu:~/0x09. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 1-args.c -o nargs
julien@ubuntu:~/0x09. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x09. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x09. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x09. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x09. argc, argv$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x09-argc_argv
File: 1-args.c
Check your code?
  Done?  
Who is done?   Help!
2. The best argument against democracy is a five-minute conversation with the average voter mandatory

Write a program that prints all arguments it receives.

All arguments should be printed, included the first one
One argument per line, ending by a new line
julien@ubuntu:~/0x09. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 2-args.c -o args
julien@ubuntu:~/0x09. argc, argv$ ./args 
./args
julien@ubuntu:~/0x09. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/0x09. argc, argv$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x09-argc_argv
File: 2-args.c
Check your code?
  Done?  
Who is done?   Help!
3. Neither irony or sarcasm is argument mandatory

Write a program that multiply two numbers.

Your program should print the result of the multiplication, followed by a new line
You can assume that the two numbers and result of the multiplication can be stored in an integer
If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
julien@ubuntu:~/0x09. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul
julien@ubuntu:~/0x09. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x09. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x09. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x09. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x09. argc, argv$ ./mul
Error
julien@ubuntu:~/0x09. argc, argv$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x09-argc_argv
File: 3-mul.c
Check your code?
  Done?  
Who is done?   Help!
4. To infinity and beyond mandatory

Write a program that adds positive numbers.

Print the result, followed by a new line
If no number is passed to the program, print 0, followed by a new line
If one of the number contains symbols that are not digits, you should print Error, followed by a new line, and return 1
You can assume that numbers and the addition of all the numbers can be stored in an int