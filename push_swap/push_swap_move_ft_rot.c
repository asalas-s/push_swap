/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_ft_rot.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 23:05:58 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/25 18:40:52 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **sorigin)
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

void	ft_rrotate(t_list **sorigin)
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

void	ft_rr(t_list **stacka, t_list **stackb)
{
	ft_rotate(stacka);
	ft_rotate(stackb);
}

void	ft_rrr(t_list **stacka, t_list **stackb)
{
	ft_rrotate(stacka);
	ft_rrotate(stackb);
}
