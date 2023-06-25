/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:16:09 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/25 19:31:53 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
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
			ft_putchar('-');
	}	
	if (r < 0)
		r = -r;
	ft_putchar(r + '0');
}

void	ft_print_olst(t_olist *olst)
{
	while (olst)
	{
		ft_putstr(ft_parser(olst->code));
		ft_putchar('\n');
		olst = olst->next;
	}
}

void	ft_print_lst(t_list *lst)
{
	while (lst)
	{
		ft_putnbr(lst->content);
		ft_putchar('\n');
		lst = lst->next;
	}
}

char	*ft_parser(int order)
{
	if (order == 0)
		return (NULL);
	if (order == 1)
		return ("sa");
	if (order == 2)
		return ("sb");
	if (order == 3)
		return ("ss");
	if (order == 4)
		return ("pa");
	if (order == 5)
		return ("pb");
	if (order == 6)
		return ("ra");
	if (order == 7)
		return ("rb");
	if (order == 8)
		return ("rr");
	if (order == 9)
		return ("rra");
	if (order == 10)
		return ("rrb");
	if (order == 11)
		return ("rrr");
}