#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	int contador = 0, i = 0, j;
	char c;
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					c = va_arg(args, int);
					_putchar(c);
					contador++;
					break;
				case 's':
					str = va_arg(args, char *);
					j = 0;
					if (!str)
						str = "(null)";
					while (str[j])
					{
						_putchar(str[j]);
						contador++;
						j++;
					}
					break;
				case '%':
					_putchar('%');
					contador++;
					break;
				default:
					return (1);
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			contador++;
		}
		i++;
	}
	va_end(args);
	return (contador);
}
