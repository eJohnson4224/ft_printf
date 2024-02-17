#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);
int		print_var(char type, va_list ap);
int	    num_print(long int num, char type);
int	    hex_print(unsigned long int num, char type);
int 	ptr_print(unsigned long int num, char type);
int		str_print(char *s, int count);
int	    char_print(int c);
int	    unsigned_print(unsigned int num, char type);
#endif