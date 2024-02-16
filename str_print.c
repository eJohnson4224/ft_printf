/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <ejohnson@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:12:56 by ejohnson          #+#    #+#             */
/*   Updated: 2024/02/15 22:13:02 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	str_print(char *s, int count)
{
	if (!s)
		return (str_print("(null)", count));
	while (*s)
		count += write(1, s++, 1);
	return (count);
}
