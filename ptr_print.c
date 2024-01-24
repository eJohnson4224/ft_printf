#include "ft_printf.h"

int	ptr_print(unsigned long num, char type)
{
	int	count;

	count = 0;
	if (num == 0)
		return (str_print("(nil)", count));
	if (count < 2)
		count += str_print("0x", count);
	return (hex_print(num, type, count));
}