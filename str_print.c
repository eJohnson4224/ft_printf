#include "ft_printf.h"

int	str_print(char *s, int count)
{
	if (!s)
		return (str_print("(null)", count));
	while (*s)
		count += write(1, s++, 1);
    return (count);
}