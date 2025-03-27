# Proyect PRINTF

## First Task

### Handle Conversion Specifiers

#### Description of Task

##### For this task, you need to implement a custom function _printf that mimics the behavior of the printf function from the C standard library. Based on the prototype: int _printf(const char *format, ...); the created function should return the number of characters printed, excluding the null byte used to end strings. The output should be written to stdout, the standard output stream. The format string can contain zero or more directives. You need to handle the following conversion specifiers: %c, %s, and %%. For this task, you do not need to reproduce the buffer handling of the printf function from the C standard library, nor the flag characters, field width, precision, or length modifiers.


## Second Task

### Implement the _printf function to handle integer specifiers

#### Description of Task

##### In this project, you are required to handle conversion specifiers in C. The conversion specifiers you need to work with in this task are d and i. Both are used to print integer values in decimal format. You will need to implement the logic to handle these specifiers when they appear in a format string. For this initial task, you do not need to worry about flag characters, field width, precision, or length modifiers. You will only focus on the basic conversion of integers.

## Repository Structure
##### The repository is structured as follows

```text
|- README.md              <-- Task description and man
|- funciones.c            <-- Contains the functions
|- _putchar.c             <-- Function created for write a character
|- get_op_func.c          <-- Contains the array with the option and the associated function
|- main.c                 <-- Local testing
|- main.h                <-- Contains all the prototypes and structures
|- _printf.c              <-- Main function for the task
```

- **_`funciones.c`_** Auxiliary file where all the functions used in the _printf.c function are stored.
- **_`putchar.c`_** External function that writes a character and is called in all the functions of the funciones.c file.
- **_`get_op_func.c`_** Array that associates each of the specifiers with the requested function.
- **_`main.c`_** File where the tests are executed to verify that our _printf.c function meets the specified requirements.
- **_`main.h`_** It is the header file, which contains all the prototypes and structures that we implement in our _printf.c function.
- **_`_printf.c`_** It is the main function, created by us, that integrates all the necessary mechanisms to print the provided input.
- **_`README.md`_** Provides the information and the manual of the functions and files used for the resolution of the tasks.


## Description

*Our program receives a text string with certain specifiers, if necessary, and then prints it. If there are no specifiers, it only prints the entered text. If there are specifiers, it will obtain the value of the indicated variable and then print it. Once all the content is printed, it returns the number of characters used.*


*Let's consider the following example: 

```text
name = Juan;

_printf("Hola %s\n", name);

```
This will print the following: `Hola Juan`

And the return is: `9`

