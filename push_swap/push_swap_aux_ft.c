/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_aux_ft.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 23:00:47 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/30 01:32:18 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isspace(int c)
{
	unsigned char	c_u;

	c_u = (unsigned char)c;
	if ((c_u == '\t') || (c_u == '\n') || (c_u == '\v')
		|| (c_u == '\f') || (c_u == '\r') || (c_u == ' '))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		signo;
	int		num;

	i = 0;
	signo = 1;
	num = 0;
	while (ft_isspace(str[i]))
			i++;
	if (str[i] == '-')
		signo = -signo;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * signo);
}

long int	ft_atoli(const char *str)
{
	int			i;
	int			signo;
	long int	num;

	i = 0;
	signo = 1;
	num = 0;
	while (ft_isspace(str[i]))
			i++;
	if (str[i] == '-')
		signo = -signo;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * signo);
}
