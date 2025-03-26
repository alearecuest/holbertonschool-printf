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
