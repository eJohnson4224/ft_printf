/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <ejohnson@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:57:48 by ejohnson          #+#    #+#             */
/*   Updated: 2024/02/20 14:57:52 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	hex_print(unsigned long int num, char type)
{
	int		count;
	int		hex_base;
	char	*symbols;

	count = 0;
	hex_base = 16;
	if (type == 'X')
		symbols = "0123456789ABCDEF";
	else
		symbols = "0123456789abcdef";
	if (num < (unsigned long int)hex_base)
		return (count + char_print(symbols[num]));
	else
	{
		count += hex_print(num / hex_base, type);
		return (count + hex_print(num % hex_base, type));
	}
}
