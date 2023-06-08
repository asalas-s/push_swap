/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:27:35 by asalas-s          #+#    #+#             */
/*   Updated: 2022/11/02 21:15:34 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_read_format(t_print *tab, char const *str)
{
	tab->index += 1;
	while (ft_isflag(str[tab->index]) == 1)
	{
		tab = ft_load_format(tab, str[tab->index]);
		(tab->index)++;
	}
	if (ft_isdigit(str[tab->index]))
		tab->wdt = ft_atoi(&str[tab->index]);
	while (ft_isdigit(str[tab->index]) == 1)
			(tab->index)++;
	if (ft_isdot(str[tab->index]) == 1)
	{
		tab = ft_load_format(tab, str[tab->index]);
		(tab->index)++;
	}
	if (ft_isdigit(str[tab->index]))
		tab->pre = ft_atoi(&str[tab->index]);
	while (ft_isdigit(str[tab->index]) == 1)
			(tab->index)++;
	if (ft_istype(str[tab->index]) == 1)
		tab->conversion = str[tab->index];
}

ssize_t	ft_format_output(t_print *tab, char const *str)
{
	ft_read_format(tab, str);
	if ((tab->conversion == 'd') || (tab->conversion == 'i'))
		return (ft_putnbrmod_fd(va_arg (tab->args, int), 1));
	if (tab->conversion == 'u')
		return (ft_putnbrunsigned_fd(va_arg (tab->args, int), 1));
	if (tab->conversion == 's')
		return (ft_putstrmod_fd(va_arg (tab->args, char *), 1));
	if (tab->conversion == 'c')
		return (ft_putcharmod_fd(va_arg(tab->args, int), 1));
	if (tab->conversion == 'x')
		return (ft_putnbrhex_fd(va_arg(tab->args, int), 1));
	if (tab->conversion == 'X')
		return (ft_putnbrhexup_fd(va_arg(tab->args, int), 1));
	if (tab->conversion == 'p')
		return (ft_putpointer_fd(va_arg(tab->args, unsigned long int), 1));
	if (tab->conversion == '%')
		return (ft_putcharmod_fd('%', 1));
	return (-1);
}
