/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:59:25 by wdwain            #+#    #+#             */
/*   Updated: 2022/01/10 17:20:39 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int *length)
{
	write(1, &c, 1);
	(*length)++;
	return (*length);
}

void	ft_putnbr(int nbr, int *length)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-', length);
	}
	if (nbr == -2147483648)
	{
		ft_putchar('2', length);
		nbr = 147483648;
	}
	if (nbr < 10)
		ft_putchar(nbr + '0', length);
	else
	{
		ft_putnbr(nbr / 10, length);
		ft_putnbr(nbr % 10, length);
	}
}

void	ft_putuns(unsigned int nbr, int *length)
{
	if (nbr < 10)
		ft_putchar(nbr + '0', length);
	else
	{
		ft_putuns(nbr / 10, length);
		ft_putuns(nbr % 10, length);
	}
}

void	ft_puthex(char *str, unsigned long long nbr, int *length)
{
	if (nbr >= 16)
	{
		ft_puthex(str, nbr / 16, length);
		nbr %= 16;
	}		
	if (nbr > 9 && nbr < 16)
	{
		if (*str == 'x' || *str == 'p')
			ft_putchar(nbr % 10 + 97, length);
		else
			ft_putchar(nbr % 10 + 65, length);
	}
	else
		ft_putchar(nbr + '0', length);
}
