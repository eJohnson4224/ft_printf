#include "ft_printf.h"

int	hex_print(unsigned long int num, char type, int count)
{
	int 	hex_base;
	char	*symbols;

	hex_base = 16;
	if (type == 'X')
		symbols = "0123456789ABCDEF";
	else
		symbols = "0123456789abcdef";
	if (num < (unsigned long int)hex_base)
		return (char_print(symbols[num]));
	else
	{
		count += hex_print(num / hex_base, type, count);
		return (count + hex_print(num % hex_base, type, count));
	}
}