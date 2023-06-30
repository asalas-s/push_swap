/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ordermore.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 22:52:45 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/30 22:03:49 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_more(t_list **stacka, t_list **stackb, t_olist **olst)
{
	int	min;

	min = ft_min_value(*stacka);
	if (min == 1)
	{
		ft_swapa(stacka, olst);
	}
	else if (min == 2)
	{
		ft_rotatea(stacka, olst);
		ft_rotatea(stacka, olst);
	}
	else if (min == 3)
	{
		ft_rrotatea(stacka, olst);
		ft_rrotatea(stacka, olst);
	}
	else if (min == 4)
	{
		ft_rrotatea(stacka, olst);
	}
	ft_pushb(stacka, stackb, olst);
	ft_order_4(stacka, stackb, olst);
	ft_pusha(stacka, stackb, olst);
}
