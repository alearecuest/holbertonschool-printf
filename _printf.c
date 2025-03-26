#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - imita a la funcion printf original
 * @format: cadena de caracteres a imprimir
 *
 * Return: cantidad de caracteres impresos o -1 si hay error
 */

int _printf(const char *format, ...)
{
	int contador = 0, i = 0;
	va_list args;
	int (*func)(va_list);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			func = get_op_func(format[i]);
			if (func == NULL)
			{
				contador += _putchar('%');
				contador += _putchar(format[i]);
			}
			if (func)
				contador += func(args);
		}
		else
		{
			contador += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (contador);
}
