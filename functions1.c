#include "main.h"
/**
 * print_unsigned - print an unsiged number
 * @types: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculate active flags
 * @width: the width
 * @precision: precision specification
 * @size: size specifier
 * Return: Number of unsigned
 */
int print_unsigned(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int nu = va_arg(types, unsigned long int);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
	{
		buffer[i--] = '0';
	}
	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num / = 10;
	}

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, prcision, size));
}

/**
 * print_octal - prints an unsigned number in octal 
 * @types: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculate active flags
 * @width: the width
 * @precision: precision specification
 * @size: size specifier
 * Return: Number of chars printed
 */
int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
	{
		buffer[i--] = '0';
	}

	buffer[BUFF_SIZE -1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 8) + '0';
		num / = 8;
	}

	if (flags & F_HASH && init_num != 0)
	{
		buffer[i--] = '0';
	}

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}


