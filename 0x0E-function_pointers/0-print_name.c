#include "function_pointers.h"
/**
 * print_name - Write a function that prints a name
 * @name: name of the person
 * @f: paramter for the function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
