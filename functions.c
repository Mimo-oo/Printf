#include "main.h"

/**
 * print_char - print a char
 * @types: list of arguments
 * @buffer: buffer array to handle print
 * @flags calculate active flags
 * @width: the width
 * @precision: precision specification
 * @size: size specifier
 * Return: Number of chars printed
 */
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);
	return (handle_write_char(c, buffer, flags, width, precision, size));
}

/**
 * print_string - print a string
 * @types: list of arguments
 * @buffer: buffer array to handle print
 * @flags calculate active flags
 * @width: the width
 * @precision: precision specification
 * @size: size specifier
 * Return: Number of chars printed
 */
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	int length, i;
	int length = 0;
	char *str = va_arg(types, char *0;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
		{
			str = "     ";
		}
	}

	while (str[length] != '\0')
		length++;

	if (precision >= 0 && precision < length)
		length = precision;

	if (width > length)
	{
		if (flags & F_MINUS)
		{
			write(1, &str[0], length);
			for ( i = width - length; i > 0; i--)
				write(1, " ", 1);
			return(width);
		}
		else
		{
			for ( i = width - length; i > 0; i--)
				write(1, " ", 1);
			write(1, &str[0], length);
			return (width);
		}
	}
	return (write(1, str, length));
}





