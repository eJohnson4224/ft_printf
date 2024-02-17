#include <stdio.h>
#include "ft_printf.h"

int	num_print(long int num, char type)
{
	char	*symbols;
	int		count;
	int		num_base;

	symbols = "0123456789";
	count = 0;
	num_base = 10;
	if (num < 0)
	{
		count += write(1, "-", 1);
		num *= -1;
	}
	if (num < num_base)
		return (count + char_print(symbols[num]));
	else
	{
		count += num_print(num / num_base, type);
		return (count + num_print(num % num_base, type));
	}
}

int	unsigned_print(unsigned int num, char type)
{
	unsigned int		num_base;
	int					count;
	char				*symbols;

	num_base = 10;
	count = 0;
	symbols = "0123456789";
	if (num < num_base)
		return (count + char_print(symbols[num]));
	else
	{
		count += unsigned_print(num / num_base, type);
		return (count + unsigned_print(num % num_base, type));
	}
}