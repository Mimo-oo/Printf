#include "main.h"
/**
 * handle_print - prints an arguement based on its type
 * @fmt: formatted string which will print the arguments.
 * @list: list of arguements to be printed.
 * @ind: ind
 * @buffer: buffer array to handle print
 * @flags: calculates active flags
 * @width: get width
 * @precision: precision specification
 * @size: size specifier
 * Retunr: 1 or 2;
 */
int handle_print(const char *fmt, int *ind, va-list list, char buffer[], int flags, int width,int precision, int size)
{

