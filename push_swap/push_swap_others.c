/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_others.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:31:54 by asalas-s          #+#    #+#             */
/*   Updated: 2023/07/01 18:42:35 by asalas-s         ###   ########.fr       */
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

/*void	ft_lstpositions(t_list *lst)
{
	int	position;
	int	len;
	int min;
	t_list *start;

	start = lst;
	position = 0;
	len = ft_lstlen(lst);
	while (position < len)
	{
		min = ft_min_value(lst);
		while ((lst->content != min) && (lst->check == 0))
			lst = lst->next;
		lst->position = position;
		lst->check = 1;
		position++;

	}
}*/

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
