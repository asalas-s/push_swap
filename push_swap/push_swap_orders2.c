/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_orders2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:49:58 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/30 01:32:41 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotatea(t_list **stack, t_olist **olst)
{
	t_olist	*node;

	rotate(stack);
	node = ft_orderlstnew(6);
	ft_orderlstadd_back(olst, node);
	ft_lstindex(*stack);
}

void	ft_rotateb(t_list **stack, t_olist **olst)
{
	t_olist	*node;

	rotate(stack);
	node = ft_orderlstnew(7);
	ft_orderlstadd_back(olst, node);
	ft_lstindex(*stack);
}

void	ft_rr(t_list **stacka, t_list **stackb, t_olist **olst)
{
	t_olist	*node;

	rotate(stacka);
	rotate(stackb);
	node = ft_orderlstnew(8);
	ft_orderlstadd_back(olst, node);
	ft_lstindex(*stacka);
	ft_lstindex(*stackb);
}
