/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_orders3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 23:00:57 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/30 01:32:37 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrotatea(t_list **stack, t_olist **olst)
{
	t_olist	*node;

	rrotate(stack);
	node = ft_orderlstnew(9);
	ft_orderlstadd_back(olst, node);
	ft_lstindex(*stack);
}

void	ft_rrotateb(t_list **stack, t_olist **olst)
{
	t_olist	*node;

	rrotate(stack);
	node = ft_orderlstnew(10);
	ft_orderlstadd_back(olst, node);
	ft_lstindex(*stack);
}

void	ft_rrr(t_list **stacka, t_list **stackb, t_olist **olst)
{
	t_olist	*node;

	rrotate(stacka);
	rrotate(stackb);
	node = ft_orderlstnew(11);
	ft_orderlstadd_back(olst, node);
	ft_lstindex(*stacka);
	ft_lstindex(*stackb);
}
