/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:28:31 by wdwain            #+#    #+#             */
/*   Updated: 2022/01/10 17:18:28 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c, int *length);
void	ft_putnbr(int nbr, int *length);
void	ft_putuns(unsigned int nbr, int *length);
void	ft_puthex(char *str, unsigned long long nbr, int *length);
void	c_type(va_list ap, int *length);
void	s_type(va_list ap, int *length);
void	d_i_type(va_list ap, int *length);
void	u_type(va_list ap, int *length);
void	x_type(char *str, va_list ap, int *length);
void	p_type(char *str, va_list ap, int *length);
void	parse_process(char *str, va_list ap, int *length);
int		parse_input(const char *format, va_list ap, int length);
int		ft_printf(const char *format, ...);

#endif