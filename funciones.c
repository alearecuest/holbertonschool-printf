#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * _char - imprime caracteres
 * @args: caracter a imprimir
 *
 * Return: retorna cantidad de caracteres impresos
 */
int _char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
/**
 * _str - imprime una cadena de texto
 * @args: cadena a imprimir
 *
 * Return: cantidad de caracteres impresos
 */
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
/**
 * porcentaje - maneja los %% e imprime %
 * @args: caracter a imprimir
 *
 * Return: cantidad de caracteres impresos
 */
int porcentaje(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
/**
 * _int - imprime un entero positivo o negativo
 * @args: numero entero
 *
 * Return: cantidad de caracteres impresos
 */
int _int(va_list args)
{
	int n = va_arg(args, int);
	int contador = 0, i = 0;
	unsigned int num;
	char buffer[20];

	if (n < 0)
	{
		_putchar('-');
		contador++;
		num = (unsigned int)(-n);
	}
	else
		num = n;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (i > 0)
	{
		_putchar(buffer[--i]);
		contador++;
	}
	return (contador);
}
