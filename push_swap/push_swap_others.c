/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_others.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:31:54 by asalas-s          #+#    #+#             */
/*   Updated: 2023/07/15 21:47:09 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstindex(t_list *lst)
{
	int	index;

	index = 0;
	while (lst)
	{
		lst->index = index;
		lst = lst->next;
		index++;
	}
}

void	ft_lstordinal_init(t_list *lst)
{
	while (lst)
	{
		lst->ordinal = -1;
		lst = lst->next;
	}
}

void	ft_lstordinal_calc(t_list *lst)
{
	int		ordinal;
	int		min;
	t_list	*base;

	base = lst;
	ordinal = 0;
	while (ordinal < ft_lstlen(lst))
	{
		while ((base->ordinal) != -1)
			base = base->next;
		min = base->content;
		while (base)
		{
			if (((base->content) < min) && ((base->ordinal) == -1))
				min = base->content;
			base = base->next;
		}
		base = lst;
		while ((base->content) != min)
			base = base->next;
		(base->ordinal) = ordinal;
		ordinal++;
		base = lst;
	}
}

int	ft_isinorder(t_list *lst)
{
	while (lst)
	{
		if (lst->next)
		{
			if (((lst->next)->content) < (lst->content))
				return (0);
		}
		lst = lst->next;
	}
	return (1);
}

char	*ft_parser(int order)
{
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
	return (NULL);
}
