/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ordermore.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 22:52:45 by asalas-s          #+#    #+#             */
/*   Updated: 2023/07/14 23:55:51 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_more(t_list **stacka, t_list **stackb, t_olist **olst)
{
	int	min;
	int	len;

	len = ft_lstlen(*stacka);
	min = ft_min_value(*stacka);
	while (len > 0)
	{
		if (min == 0)
			ft_pushb(stacka, stackb, olst);
		if (min == len)
		{
			ft_rrotatea(stacka, olst);
			ft_pushb(stacka, stackb, olst);
		}
		if ((min > len / 2) && (min != len))
			ft_rrotatea(stacka, olst);
		if ((min <= len / 2) && (min != 0))
			ft_rotatea(stacka, olst);
		len = ft_lstlen(*stacka);
		min = ft_min_value(*stacka);
	}
	len = ft_lstlen(*stackb);
	while (len > 0)
	{
		ft_pusha(stacka, stackb, olst);
		len = ft_lstlen(*stackb);
	}
}
