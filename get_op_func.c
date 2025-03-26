#include "main.h"
#include <stddef.h>

int (*get_op_func(char s))(va_list args)
{
	int i;
	espec_t ops[] = {
		{'c', _char},
		{'s', _str},
		{'\0', NULL}
	};
	i = 0;

	while (ops[i].op)
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
