/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:42:23 by wdwain            #+#    #+#             */
/*   Updated: 2022/01/10 17:21:44 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		length;
	va_list	ap;
	
	length = 0;
	va_start(ap, format);
	length = parse_input(format, ap, length);
	va_end(ap);
	return (length);
}
