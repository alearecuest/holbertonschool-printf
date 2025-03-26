#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

int _char(va_list args)
{
	return (_putchar(va_arg(args,int)));
}

int _str(va_list args)
{
	int contador = 0, i = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		contador++;
		i++;
	}
	return (contador);
}
