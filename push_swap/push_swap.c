/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novasol <novasol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:27:20 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/23 13:27:17 by novasol          ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_list	*stacka;
	t_list	*stackb;

	stacka = NULL;
	stackb = NULL;
	(void)stackb;
	if (argc > 1)
	{
		stacka = ft_validate_imput(argc, argv);
		if (!stacka)
			printf("Error\n");
		if (!ft_isinorder(stacka))
			printf("HAY QUE ORDENAR\n");
	}
}
