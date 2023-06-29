/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_orders1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:49:58 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/30 01:32:43 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapa(t_list **stack, t_olist **olst)
{
	t_olist	*node;

	swap(stack);
	node = ft_orderlstnew(1);
	ft_orderlstadd_back(olst, node);
	ft_lstindex(*stack);
}

void	ft_swapb(t_list **stack, t_olist **olst)
{
	t_olist	*node;

	swap(stack);
	node = ft_orderlstnew(2);
	ft_orderlstadd_back(olst, node);
	ft_lstindex(*stack);
}

void	ft_ss(t_list **stacka, t_list **stackb, t_olist **olst)
{
	t_olist	*node;

	swap(stacka);
	swap(stackb);
	node = ft_orderlstnew(3);
	ft_orderlstadd_back(olst, node);
	ft_lstindex(*stacka);
	ft_lstindex(*stackb);
}

void	ft_pusha(t_list **stacka, t_list **stackb, t_olist **olst)
{
	t_olist	*node;

	push(stackb, stacka);
	node = ft_orderlstnew(4);
	ft_orderlstadd_back(olst, node);
	ft_lstindex(*stacka);
	ft_lstindex(*stackb);
}

void	ft_pushb(t_list **stacka, t_list **stackb, t_olist **olst)
{
	t_olist	*node;

	push(stacka, stackb);
	node = ft_orderlstnew(5);
	ft_orderlstadd_back(olst, node);
	ft_lstindex(*stacka);
	ft_lstindex(*stackb);
}
