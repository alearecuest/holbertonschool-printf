# Proyect PRINTF


### NAME
**_printf** - produce output according to a format


### SYNOPSIS

```text
#include "main.h"

int _printf(const char *format, ...);
```


### DESCRIPTION

The **_printf** function produces output according to a format as described below. The format string is composed of zero or more directives. The function writes the output to stdout, the standard output stream.

#### Format of the format string

The format string is a sequence of characters that starts and ends in its initial shift state, if applicable. This string can include one or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which fetches zero or more subsequent arguments. Each conversion specification begins with the character % and ends with a conversion specifier.

### **Conversion specifiers**

The following conversion specifiers are supported:

- **%c**: Prints a single character using the internal function _**_char()_**.
- **%s**: Prints a string of characters using the internal function _**_str()_**.
- **%%**: Prints a literal percentage '%' using the internal function **_porcentaje_**.
- **%d**: Prints a decimal (base 10) number, using the internal function **__int()_**.
- **%i**: Prints an integer in base 10, using the internal function **__int()_**.

### Functions

#### __printf.c_

```text
int _printf(const char *format, ...);
```

- **Description**: Produces output according to a format.
- **Parameters**: format -> A character string composed of zero or more directives.
- **Return Value**: The number of characters printed (excluding the null byte).

#### __putchar.c_

```text
int _putchar(char c);
```

- **Description**: Writes a character to stdout.
- **Parameters**: c -> The character to be written.
- **Return Value**: On success, returns the character written. On error, returns -1.

#### _funciones.c_

```text
int _char(va_list args); 
```

- **Description**: Print a character.
- **Parameters**: args -> List of arguments containing the character to be printed.
- **Return Value**: The number of characters printed.

```text
int _str(va_list args); 
```

- **Description**: Prints a string of text.
- **Parameters**: args -> List of arguments containing the string to be printed.
- **Return Value**: The number of characters printed.

```text
int porcentaje(va_list args); 
```

- **Description**: Handles %% prints %.
- **Parameters**: args -> List of arguments.
- **Return Value**: The number of characters printed.

```text
int _int(va_list args); 
```

- **Description**: Prints a postive o negative integer.
- **Parameters**: args -> List of arguments containing the integer to be printed.
- **Return Value**: The number of characters printed.

#### _get_op_func.c_

```text
int (*get_op_func(char s))(va_list args);
```

- **Description**: Receives a character and returns the associated function.
- **Parameters**: s -> Character.
- **Return Value**: The function associated with the character, or NULL if no match is found.

#### _main.h_

```text
typedef struct especificador
```

- **Description**: Defines a structure that associates a format specifier with the corresponding function that handles that format.It is used alongside the get_op_func function to dynamically select the appropriate function according to the specifier found in the format string.
- **Parameters**: 
    - **_op_** -> The character representing the format specifier. 
    - **_f_** -> A pointer to the function that prints the argument corresponding to the specifier.
- **Return Value**: Not applicable; this structure is only a data type definition.


### RETURN VALUE

The **_```_printf```_** functions returns the number of characters printed (excluding the **_```NULL```_** byte used to end output to strings). If the **_```format```_** argument is **_```NULL```_** or if an invalid specifier is provided, the function returns **_```-1```_**.


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


### ERROR HANDLING

The **_printf** function handles errors gracefully. If an invalid format specifier is encountered, the function will return -1 and print an error message to stderr.


### LIMITATIONS
The current implementation of **_printf** does not support the following:

- Flag characters
- Field width
- Precision
- Length modifiers

### TESTING
To test the **_printf** function, compile your code using the following command:

```text
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

Run the executable to see the output:

```text
$ ./printf
```

==================================================================================

### AUTHOR

_Written by Marrero, Martín & Arévalo, Alejandro_

==================================================================================


