/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_values.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:02:56 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/25 19:03:25 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_valor(t_list	*list)
{
	int	max;

	if (list)
		max = list->content;
	while (list)
	{
		if ((list->content) >= max)
			max = list->content;
		list = list->next;
	}
	return (max);
}

int	ft_min_valor(t_list	*list)
{
	int	min;

	if (list)
		min = list->content;
	while (list)
	{
		if ((list->content) <= min)
			min = list->content;
		list = list->next;
	}
	return (min);
}
