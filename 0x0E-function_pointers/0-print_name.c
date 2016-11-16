#include "function_pointers.h"
/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
