#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_char - prints a char
* @args: va_list containing the char
*/
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
* print_int - prints an int
* @args: va_list containing the int
*/
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
* print_float - prints a float
* @args: va_list containing the float
*/
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
* print_string - prints a string
* @args: va_list containing the string
*/
void print_string(va_list args)
{
char *str = va_arg(args, char *);

if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}

/**
* print_all - prints anything
* @format: list of types of arguments passed
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
char *sep = "";
printer_t printers[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};

va_start(args, format);

while (format && format[i])
{
j = 0;
while (printers[j].symbol)
{
if (format[i] == *(printers[j].symbol))
{
printf("%s", sep);
printers[j].print(args);
sep = ", ";
break;
}
j++;
}
i++;
}

va_end(args);
printf("\n");
}

