/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_move_ft_ps.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 23:00:57 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/22 01:25:30 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **sstack, char stack)
{
	int	swap;

	if (((*sstack) != NULL) && ((*sstack)->next != NULL))
	{
		swap = (*sstack)->content;
		(*sstack)->content = (*sstack)->next->content;
		(*sstack)->next->content = swap;
		if (stack == 'a')
			swap = 0;
		else
			swap = 1;
	}
}

/* void	ft_ss(tlist *stackorigin, tlist *stackdest)
{

}*/

void	ft_push(t_list **stackorigin, t_list **stackdest, char stack)
{
	t_list	*push;

	push = (*stackorigin)->next;
	(*stackorigin)->next = (*stackdest);
	(*stackdest) = (*stackorigin);
	(*stackorigin) = push;
	if (stack == 'a')
		push = NULL;
	else
		push = NULL;
}
