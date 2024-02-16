/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <ejohnson@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:11:52 by ejohnson          #+#    #+#             */
/*   Updated: 2024/02/15 22:11:57 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ptr_print(unsigned long int num, char type)
{
	int	count;

	count = 0;
	if (num == 0)
		return (str_print("(nil)", count));
	if (count < 2)
		count += str_print("0x", count);
	return (count + hex_print(num, type));
}
