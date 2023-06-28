/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_orders.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 23:00:57 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/28 21:34:33 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_list **stacka, t_list **stackb, t_olist **olst)
{
	t_olist	*node;

	swap(stacka);
	swap(stackb);
	node = ft_orderlstnew(3);
	ft_orderlstadd_back(olst, node);
}

void	ft_rr(t_list **stacka, t_list **stackb, t_olist **olst)
{
	t_olist	*node;

	rotate(stacka);
	rotate(stackb);
	node = ft_orderlstnew(8);
	ft_orderlstadd_back(olst, node);
}

void	ft_rrr(t_list **stacka, t_list **stackb, t_olist **olst)
{
	t_olist	*node;

	rrotate(stacka);
	rrotate(stackb);
	node = ft_orderlstnew(11);
	ft_orderlstadd_back(olst, node);
}
