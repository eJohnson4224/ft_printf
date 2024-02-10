#include <stdio.h>
#include "ft_printf.h"

int	num_print(long int num, char type, int count)
{
	char	*symbols;
	int			num_base;

	symbols = "0123456789";
	num_base = 10;
	if (num < 0)
	{
		count += write(1, "-", 1);
		num *= -1;
	}
	if (num < num_base)
		return (char_print(symbols[num]));
	else
	{
		count += num_print(num / num_base, type, count);
		return (count + num_print(num % num_base, type, count));
	}
}

int	unsigned_print(unsigned int num, char type, int count)
{
	unsigned int		num_base;
	char	*symbols;

	num_base = 10;
	symbols = "0123456789";
	if (num < num_base)
		return (char_print(symbols[num]));
	else
	{
		count += unsigned_print(num / num_base, type, count);
		return (count + unsigned_print(num % num_base, type, count));
	}
}