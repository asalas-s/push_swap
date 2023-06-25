/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_ft_ps.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 23:00:57 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/25 18:52:22 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **sorigin)
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

void	ft_ss(t_list **stacka, t_list **stackb)
{
	ft_swap(stacka);
	ft_swap(stackb);
}

void	ft_push(t_list **sorigin, t_list **sdest)
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
