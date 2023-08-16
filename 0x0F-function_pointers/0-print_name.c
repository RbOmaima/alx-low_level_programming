#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the string aname
 * @f: the printing finction pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

