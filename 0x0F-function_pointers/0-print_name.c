#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -this is used print name using pointer to function
 * @name:this is the string to add
 * @f:this is the pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

