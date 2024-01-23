#include "ft_printf.h"

int	str_print(char *s, int count)
{
	if (!s)
		return (0);
	while (*s)
		count += write(1, s++, 1);
    return (count);
}