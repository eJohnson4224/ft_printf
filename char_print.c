#include "ft_printf.h"

int	char_print(int c)
{
	return (write(1, &c, 1));
}