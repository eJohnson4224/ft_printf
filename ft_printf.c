#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int			count;
	va_list		argp;

	count = 0;
	va_start(argp, input);
	while (*input != '\0')
	{
		if (*input == '%')
			count += print_var(*++input, argp);
		else
			count += write(1, input, 1);
		++input;
	}
	va_end(argp);

	return (count);
}

int	print_var(char type, va_list ap)
{
	int		count;

	count = 0;
	if (type == 'c')
		count = char_print(va_arg(ap, int));
	else if (type == 's')
		count = str_print(va_arg(ap, char *), count);
	else if (type == 'd' || type == 'i')
		count = num_print(va_arg(ap, int), type, 0);
	else if (type == 'u')
		count = unsigned_print(va_arg(ap, unsigned int), count, 0);
	else if (type == 'x' || type == 'X')
		count = hex_print(va_arg(ap, unsigned int), type, 0);
	else if (type == 'p')
		count = ptr_print((unsigned long)va_arg(ap, void *), type);
	else if (type == '%')
		count = write (1, &"%", 1);
	else
		count = str_print("(null)", count);

	return (count);
}