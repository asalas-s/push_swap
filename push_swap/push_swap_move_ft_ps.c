/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_ft_ps.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 23:00:57 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/22 23:34:02 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **stackorigin, char stack)
{
	int	swap;
	int	len;

	len = ft_lstlen((*stackorigin));
	if (len >= 2)
	{
		swap = (*stackorigin)->content;
		(*stackorigin)->content = (*stackorigin)->next->content;
		(*stackorigin)->next->content = swap;
		if (stack == 'a')
			swap = 0;
		else
			swap = 1;
	}
}

void	ft_ss(t_list **stackorigin, t_list **stackdest)
{
	ft_swap(stackorigin, 's');
	ft_swap(stackdest, 's');
}

void	ft_push(t_list **stackorigin, t_list **stackdest, char stack)
{
	t_list	*node;
	t_list	*start;

	if ((*stackorigin))
	{
		node = (*stackorigin);
		start = (*stackorigin)->next;
		node->next = NULL;
		(*stackorigin) = start;
		ft_lstadd_front(stackdest, node);
		if (stack == 'a')
			node = NULL;
		else
			node = NULL;
	}
}
