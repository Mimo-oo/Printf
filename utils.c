#include "main.h"

/**
 * is_printable - evaluates if a char is printable
 * @c: char to be evaluated
 * Return: 1 if c is printable or 0 if its not printable
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ascii in hexadecimal code
 * @buffer: array of chars
 * @i: index at which to start appending
 * @ascii_code: ASCII CODE
 * Return: always 3
 */
itn append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - verifies if a char is  a digit
 * @c: char to be evaluated
 * Return: 1 if c is a digit or 0 if its not a digit
 */
int is_printable(char c)
{
        if (c >= '0' && c < '9')
                return (1);

        return (0);
}

