/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:54:23 by wdwain            #+#    #+#             */
/*   Updated: 2022/01/10 16:08:29 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_process(char *str, va_list ap, int *length)
{
	if (*str == 'c')
		c_type(ap, length);
	else if (*str == 's')
		s_type(ap, length);
	else if (*str == 'd' || *str == 'i')
		d_i_type(ap, length);
	else if (*str == 'u')
		u_type(ap, length);
	else if (*str == 'x'|| *str == 'X')
		x_type(str, ap, length);
	else if (*str == 'p')
		p_type(str, ap, length);
	else
		ft_putchar(*str, length);
}

int	parse_input(const char *str, va_list ap, int length)
{
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			parse_process((char *)str, ap, &length);
			str++;
		}
		else
			ft_putchar(*str++, &length);
	}
	return (length);
}