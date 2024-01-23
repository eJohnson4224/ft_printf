#include "ft_printf.h"

int	ptr_print(long num, char type, int count)
{
	int 	hex_base;
	char	*symbols;

	hex_base = 16;
    symbols = "123456789abcdef";
	if (count < 2)
		count += str_print("0x", count);
	if (num < hex_base)
		return (char_print(symbols[num - 1]));
	else
	{
		count = ptr_print((unsigned int) num / hex_base, type, count);
		return (count + ptr_print((unsigned int)num % hex_base, type, count));
	}
}