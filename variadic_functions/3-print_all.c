#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - Prints anything based on format specifiers
* @format: List of types of arguments passed
*
* Return: Nothing
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str, *sep = "";
printer_t printers[] = {
{"c", (void (*)(va_list))[](va_list args) { printf("%c", va_arg(args, int)); }},
{"i", (void (*)(va_list))[](va_list args) { printf("%d", va_arg(args, int)); }},
{"f", (void (*)(va_list))[](va_list args) { printf("%f", va_arg(args, double)); }},
{"s", (void (*)(va_list))[](va_list args) {
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
if (str != NULL)
printf("%s", str);
}},
{NULL, NULL}
};

va_start(args, format);

while (format != NULL && format[i] != '\0')
{
unsigned int j = 0;

while (printers[j].symbol != NULL)
{
if (format[i] == *(printers[j].symbol))
{
printf("%s", sep);
printers[j].print(args);
sep = ", ";
}
j++;
}
i++;
}

va_end(args);
printf("\n");
}
