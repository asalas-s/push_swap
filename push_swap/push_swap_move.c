/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 23:05:58 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/28 21:48:50 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **sorigin)
{
	int		swap;
	int		len;

	len = ft_lstlen((*sorigin));
	if (len >= 2)
	{
		swap = (*sorigin)->content;
		(*sorigin)->content = (*sorigin)->next->content;
		(*sorigin)->next->content = swap;
	}
}

void	push(t_list **sorigin, t_list **sdest)
{
	t_list	*node;
	t_list	*start;

	if ((*sorigin))
	{
		node = (*sorigin);
		start = (*sorigin)->next;
		node->next = NULL;
		(*sorigin) = start;
		ft_lstadd_front(sdest, node);
	}
}

void	rotate(t_list **sorigin)
{
	t_list	*node;
	t_list	*nodepost;
	int		len;

	len = ft_lstlen((*sorigin));
	if (len >= 2)
	{
		node = (*sorigin);
		nodepost = (*sorigin)->next;
		node->next = NULL;
		(*sorigin) = nodepost;
		ft_lstadd_back(sorigin, node);
	}
}

void	rrotate(t_list **sorigin)
{
	t_list	*node;
	t_list	*nodeprev;
	int		len;

	len = ft_lstlen((*sorigin));
	if (len >= 2)
	{
		node = ft_lstpos((*sorigin), len -1);
		nodeprev = ft_lstpos((*sorigin), len -2);
		nodeprev->next = NULL;
		ft_lstadd_front(sorigin, node);
	}
}
