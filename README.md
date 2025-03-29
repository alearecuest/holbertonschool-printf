# Proyect *PRINTF*


### NAME
**__printf_** - produce output according to a format


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

- **_Description_**: Produces output according to a format.
- **_Parameters_**: format -> A character string composed of zero or more directives.
- **_Return Value_**: The number of characters printed (excluding the null byte).

#### __putchar.c_

```text
int _putchar(char c);
```

- **_Description_**: Writes a character to stdout.
- **_Parameters_**: c -> The character to be written.
- **_Return Value_**: On success, returns the character written. On error, returns -1.

#### _funciones.c_

```text
int _char(va_list args); 
```

- **_Description_**: Print a character.
- **_Parameters_**: args -> List of arguments containing the character to be printed.
- **_Return Value_**: The number of characters printed.

```text
int _str(va_list args); 
```

- **_Description_**: Prints a string of text.
- **_Parameters_**: args -> List of arguments containing the string to be printed.
- **_Return Value_**: The number of characters printed.

```text
int porcentaje(va_list args); 
```

- **_Description_**: Handles %% prints %.
- **_Parameters_**: args -> List of arguments.
- **_Return Value_**: The number of characters printed.

```text
int _int(va_list args); 
```

- **_Description_**: Prints a postive o negative integer.
- **_Parameters_**: args -> List of arguments containing the integer to be printed.
- **_Return Value_**: The number of characters printed.

#### _get_op_func.c_

```text
int (*get_op_func(char s))(va_list args);
```

- **_Description_**: Receives a character and returns the associated function.
- **_Parameters_**: s -> Character.
- **_Return Value_**: The function associated with the character, or NULL if no match is found.

#### _main.h_

```text
typedef struct especificador
```

- **_Description_**: Defines a structure that associates a format specifier with the corresponding function that handles that format.It is used alongside the get_op_func function to dynamically select the appropriate function according to the specifier found in the format string.
- **_Parameters_**: 
    - **_op_** -> The character representing the format specifier. 
    - **_f_** -> A pointer to the function that prints the argument corresponding to the specifier.
- **_Return Value_**: Not applicable; this structure is only a data type definition.


### RETURN VALUE

The **_`_printf`_** functions returns the number of characters printed (excluding the **_`NULL`_** byte used to end output to strings). If the **_`format`_** argument is **_`NULL`_** or if an invalid specifier is provided, the function returns **_`-1`_**.


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


### MORE EXAMPLES

| **_CASE_** | **_OUTPUT_** |
| ------------- |:-------------:|
| `_printf("Hello, %s!\n", "World");` | **Hello, World!** |
| `_printf("The number is: %d\n", 30);` | **The number is: 30** |
| `_printf("Charater: %c\n", 'A');` | **Character: A** |
| `_printf("Integer: %dn", 123);` | **123** |
| `_printf("Percent sign: %%\n");` | **%** |
| `_printf("Hello, %s! Character: %c, Integer: %d, Percent sign: %%\n", "World", 'A', 123);` | **Hello, World! Character: A, Integer: 123, Percent sign: %** |
| `_printf("Result: %d\n", result);` | **-1** |
| `_printf("Negative integer: %d\n", -456);` | **-456** |
| `_printf("Null string: %s\n", NULL);` | **NULL** |
| `_printf("String: %s, Character: %c, Integer: %d, Percent: %%\n", "test", 'B', 789);` | **String: test, Character: B, Integer: 789, Percent: %** |
| `_printf("Large number: %d\n", 123456789);` | **123456789** |
| `_printf("Positive decimal: %f\n", 234.456);` | **234.456000** |
| `_printf("Negative decimal: %f\n", -234.456);` | **-234.456000** |


### ERROR HANDLING

The **_`_printf`_** function handles errors gracefully. If an invalid format specifier is encountered, the function will return **`-1`** and print an error message to **`stderr`**.


### LIMITATIONS
The current implementation of **_`_printf`_** does not support the following:

- Flag characters
- Field width
- Precision
- Length modifiers

The **_`_printf`_** function is a limited implementation of the standard printf function from the **C** standard library. It does not support advanced specifiers such as **`%f`**, **`%x`**, **`%u`**, **`%p`**, among others


### TESTING
To test the **_`_printf`_** function, compile your code using the following command:

```text
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

Run the executable to see the output:

```text
$ ./_printf
```


==================================================================================

### AUTHOR

_Written by Marrero, Martín & Arévalo, Alejandro_

==================================================================================
