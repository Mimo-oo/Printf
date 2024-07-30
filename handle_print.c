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
	int i, unknow_len = 0, printed_chars = -1;
	fmt_t fmt_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'i', print_int}, {'d', print_int}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},

