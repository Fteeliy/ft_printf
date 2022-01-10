/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:31:56 by wdwain            #+#    #+#             */
/*   Updated: 2022/01/10 15:34:29 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	x_type(char *str, va_list ap, int *length)
{
	unsigned int	nbr;

	nbr = va_arg(ap, unsigned int);
	ft_puthex(str, nbr, length);
}

void	p_type(char *str, va_list ap, int *length)
{
	unsigned long	adr;

	adr = va_arg(ap, unsigned long long);
	ft_putchar('0', length);
	ft_putchar('x', length);
	ft_puthex(str, ap, length);
}