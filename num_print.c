#include "ft_printf.h"
#include "ft_printf.h"

int	num_print(long num, char type, int count)
{
	int		num_base;
	char	*symbols;

	num_base = 10;
	symbols = "123456789";
	if (num < 0)
	{
		count += write(1, &"-", 1);
		return (num_print(-num, type, count));
	}
	else if (num < num_base)
		return (char_print(symbols[num - 1]));
	else
	{
		count += num_print(num / num_base, type, count);
		return (count + num_print(num % num_base, type, count));
	}

	//return (count);
}