#include "main.h"

/**
 * printInt - prints integer values.
 *
 * @args: values to  be printed.
 * Return: number of values printed.
 */

int printInt(va_list args)
{
	int arg = va_arg(args, int);
	int num, last = arg % 10, digit, exp = 1;
	int  i = 1;

	arg = arg / 10;
	num = arg;

	if (last < 0)
	{
		putChar('-');
		num = -num;
		arg = -arg;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = arg;
		while (exp > 0)
		{
			digit = num / exp;
			putChar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	putChar(last + '0');

	return (i);
}
