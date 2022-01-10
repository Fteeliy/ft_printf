/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:15:20 by wdwain            #+#    #+#             */
/*   Updated: 2022/01/10 15:29:17 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	c_type(va_list ap, int *length)
{
	char	c;
	c = va_arg(ap, int);
	ft_putchar(c, length);
}

void	s_type(va_list ap, int *length)
{
	char	*s;
	
	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	while (*s)
		ft_putchar(*s++, length);
}

void	d_i_type(va_list ap, int *length)
{
	int	nbr;
	
	nbr = va_arg(ap, int);
	ft_putnbr(nbr, length);
}

void	u_type(va_list ap, int *length)
{
	unsigned int	nbr;

	nbr = va_arg(ap, unsigned int);
	ft_putuns(nbr, length);
}