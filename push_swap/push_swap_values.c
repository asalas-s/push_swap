/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_values.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:02:56 by asalas-s          #+#    #+#             */
/*   Updated: 2023/07/15 21:09:42 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_value(t_list	*list)
{
	int	max;
	int	index;

	if (list)
	{
		max = list->content;
		index = list->index;
	}
	while (list)
	{
		if ((list->content) > max)
		{
			max = list->content;
			index = list->index;
		}
		list = list->next;
	}
	return (index);
}

int	ft_min_value(t_list	*list)
{
	int	min;
	int	index;

	if (list)
	{
		min = list->content;
		index = list->index;
	}
	while (list)
	{
		if ((list->content) < min)
		{
			min = list->content;
			index = list->index;
		}
		list = list->next;
	}
	return (index);
}
