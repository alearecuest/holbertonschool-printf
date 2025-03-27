# Proyect PRINTF

### NAME
_printf - produce output according to a format

### SYNOPSIS

```text
#include "main.h"

int _printf(const char *format, ...);
```
### DESCRIPTION

The _printf function produces output according to a format as described below. The format string is composed of zero or more directives. The function writes the output to stdout, the standard output stream.

#### **Conversion specifiers**

The following conversion specifiers are supported:


- %c: Print a single character.
- %s: Print a string of characters.
- %%: Print a percent sign.
- %d: Print a decimal (base 10) number.
- %i: Print an integer in base 10.


### RETURN VALUE

The _printf functions returns the number of characters printed (excluding the NULL byte used to end output to strings).

### EXAMPLE

```text
#include "main.h"

int main(void)
{
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");
    _printf("Decimal:[%d]\n", 123);
    _printf("Integer:[%i]\n", 456);
    return (0);
}
```

### SEE ALSO


### AUTHOR

_Written by Marrero, Martín & Arévalo, Alejandro_

==================================================================================


### NAME

_printf - handle additional conversion specifiers

### SYNOPSIS

```text
#include "main.h"

int _printf(const char *format, ...);
```

### DESCRIPTION

The _printf function has been extended to handle additional conversion specifiers for decimal and integer values.


### **Conversion specifiers**

The following conversion specifiers are supported:

- %d: Print a decimal (base 10) number.
- %i: Print an integer in base 10.


### RETURN VALUE

The _printf function returns the number of characters printed (excluding the null byte used to end output to strings).

### EXAMPLES

```text
#include "main.h"

int main(void)
{
    _printf("Decimal:[%d]\n", 123);
    _printf("Integer:[%i]\n", 456);
    return (0);
}
```

### SEE ALSO


### AUTOR

_Written by Marrero, Martín & Arévalo, Alejandro_


