/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_ft_rot.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 23:05:58 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/22 23:10:39 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **stackorigin, char stack)
{
	t_list	*node;
	t_list	*nodepost;
	int		len;

	len = ft_lstlen((*stackorigin));
	if (len >= 2)
	{
		node = (*stackorigin);
		nodepost = (*stackorigin)->next;
		node->next = NULL;
		(*stackorigin) = nodepost;
		ft_lstadd_back(stackorigin, node);
		if (stack == 'a')
			node = NULL;
		else
			node = NULL;
	}
}

void	ft_rrotate(t_list **stackorigin, char stack)
{
	t_list	*node;
	t_list	*nodeprev;
	int		len;

	len = ft_lstlen((*stackorigin));
	if (len >= 2)
	{
		node = ft_lstpos((*stackorigin), len -1);
		nodeprev = ft_lstpos((*stackorigin), len -2);
		nodeprev->next = NULL;
		ft_lstadd_front(stackorigin, node);
		if (stack == 'a')
			node = NULL;
		else
			node = NULL;
	}
}

void	ft_rr(t_list **stackorigin, t_list **stackdest)
{
	ft_rotate(stackorigin, 'r');
	ft_rotate(stackdest, 'r');
}

void	ft_rrr(t_list **stackorigin, t_list **stackdest)
{
	ft_rrotate(stackorigin, 'r');
	ft_rrotate(stackdest, 'r');
}
