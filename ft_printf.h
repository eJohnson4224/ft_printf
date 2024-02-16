/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <ejohnson@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:02:28 by ejohnson          #+#    #+#             */
/*   Updated: 2024/02/15 22:02:34 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);
int		print_var(char type, va_list ap);
int		num_print(long int num, char type, int count);
int		hex_print(unsigned long int num, char type);
int		ptr_print(unsigned long int num, char type);
int		str_print(char *s, int count);
int		char_print(int c);
int		unsigned_print(unsigned int num, char type, int count);
#endif
