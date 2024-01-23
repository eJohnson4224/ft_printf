#include "ft_printf.h"

int	hex_print(long num, char type, int count)
{
	int 	hex_base;
	char	*symbols;

	hex_base = 16;
	if (type == 'X')
		symbols = "123456789ABCDEF";
	else
		symbols = "123456789abcdef";
	if (num < hex_base)
		return (char_print(symbols[num - 1]));
	else
	{
		count = hex_print((unsigned int) num / hex_base, type, count);
		return (count + hex_print((unsigned int)num % hex_base, type, count));
	}
}