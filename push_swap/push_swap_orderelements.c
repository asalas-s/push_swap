/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_orderelements.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 22:52:45 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/30 01:32:46 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_orderstack(t_list **stacka, t_list **stackb, t_olist **olst)
{
	int	stacklen;

	stacklen = ft_lstlen(*stacka);
	if (stacklen == 2)
		ft_order_2(stacka, stackb, olst);
	else if (stacklen == 3)
		ft_order_3(stacka, stackb, olst);
	ft_print_olst(*olst);
}

void	ft_order_2(t_list **stacka, t_list **stackb, t_olist **olst)
{
	(void)stackb;
	ft_swapa(stacka, olst);
}

void	ft_order_3(t_list **stacka, t_list **stackb, t_olist **olst)
{
	int	max;
	int	min;

	max = ft_max_value(*stacka);
	min = ft_min_value(*stacka);
	(void)stackb;
	if ((max == 2) && (min == 1))
		ft_swapa(stacka, olst);
	if ((max == 0) && (min == 2))
	{
		ft_swapa(stacka, olst);
		ft_rrotatea(stacka, olst);
	}
	if ((max == 0) && (min == 1))
		ft_rotatea(stacka, olst);
	if ((max == 1) && (min == 0))
	{
		ft_swapa(stacka, olst);
		ft_rotatea(stacka, olst);
	}
	if ((max == 1) && (min == 2))
		ft_rrotatea(stacka, olst);
}

void	ft_order_4(t_list **stacka, t_list **stackb, t_olist **olst)
{
	int	max;
	int	min;

	max = ft_max_value(*stacka);
	min = ft_min_value(*stacka);
	if ((max == 0) || (min == 0) || (max == 3) || (min == 3))
	{
		if ((max == 3) || (min == 3))
			ft_rrotatea(stacka, olst);
		ft_pushb(stacka, stackb, olst);
		ft_order_3(stacka, stackb, olst);
		ft_pusha(stacka, stackb, olst);
		if ((max == 0) || (min == 0))
			ft_rotatea(stacka, olst);
	}
}