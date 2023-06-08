/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:35:14 by asalas-s          #+#    #+#             */
/*   Updated: 2022/11/02 21:05:10 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *fstr, ...)
{
	int		sum;
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_init_format(tab);
	va_start(tab->args, fstr);
	while (fstr[++(tab->index)] && (tab->ret != -1))
	{
		if (fstr[tab->index] == '%')
			tab->ret = ft_format_output(tab, fstr);
		else
			tab->ret = ft_putcharmod_fd(fstr[tab->index], 1);
		tab->sum += tab->ret;
	}
	va_end(tab->args);
	if (tab->ret != -1)
		sum = tab->sum;
	else
		sum = -1;
	free (tab);
	return (sum);
}
