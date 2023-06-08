/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:56:16 by asalas-s          #+#    #+#             */
/*   Updated: 2022/11/02 22:42:49 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_init_format(t_print *tab)
{
	tab->minus = 0;
	tab->plus = 0;
	tab->blank = 0;
	tab->point = 0;
	tab->hash = 0;
	tab->zero = 0;
	tab->wdt = 0;
	tab->pre = 0;
	tab->sum = 0;
	tab->ret = 0;
	tab->index = -1;
	return (tab);
}

t_print	*ft_load_format(t_print *tab, char c)
{
	if (c == '-')
		tab->minus += 1;
	if (c == '+')
		tab->plus += 1;
	if (c == ' ')
		tab->blank += 1;
	if (c == '.')
		tab->point += 1;
	if (c == '#')
		tab->hash += 1;
	if (c == '0')
		tab->zero += 1;
	return (tab);
}

int	ft_isflag(char c)
{
	if ((c == '-') || (c == '+') || (c == ' ') || (c == '#') || (c == '0'))
		return (1);
	else
		return (0);
}

int	ft_isdot(char c)
{
	if (c == '.')
		return (1);
	else
		return (0);
}

int	ft_istype(char c)
{
	if ((c == 'd') || (c == 'i') || (c == 'u') || (c == 'x')
		|| (c == 'X') || (c == 'c') || (c == 's')
		|| (c == '%') || (c == 'p'))
		return (1);
	else
		return (0);
}
