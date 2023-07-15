/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:16:09 by asalas-s          #+#    #+#             */
/*   Updated: 2023/07/15 21:32:00 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char	*str, int fd)
{
	while (*str != '\0')
	{
		ft_putchar(*str, fd);
		str++;
	}
}

void	ft_putnbr(int n)
{
	int	p_ent;
	int	r;

	p_ent = n / 10;
	r = n % 10;
	if (p_ent != 0)
		ft_putnbr(p_ent);
	else
	{
		if (r < 0)
			ft_putchar('-', 1);
	}	
	if (r < 0)
		r = -r;
	ft_putchar(r + '0', 1);
}

void	ft_print_olst(t_olist *olst)
{
	while (olst)
	{
		ft_putstr(ft_parser(olst->code), 1);
		ft_putchar('\n', 1);
		olst = olst->next;
	}
}

void	ft_print_lst(t_list *lst)
{
	while (lst)
	{
		ft_putnbr(lst->content);
		ft_putchar('|', 1);
		ft_putnbr(lst->ordinal);
		ft_putchar('|', 1);
		ft_putnbr(lst->index);
		ft_putchar('|', 1);
		ft_putnbr(lst->prize);
		ft_putchar('\n', 1);
		lst = lst->next;
	}
}
