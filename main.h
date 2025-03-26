#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct especificador
{
	char op;
	int (*f)(va_list);
} espec_t;

int _putchar(char c);
int _char(va_list args);
int _str(va_list args);
int (*get_op_func(char s))(va_list args);
int _printf(const char *format, ...);


#endif /* MAIN_H */
