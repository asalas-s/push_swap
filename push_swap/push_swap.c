/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:27:20 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/22 01:28:31 by asalas-s         ###   ########.fr       */
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

	if (argc > 1)
	{
		stacka = ft_validate_imput(argc, argv);
		if (stacka != NULL)
			printf("ENTRADA DE DATOS CORRECTA\n");
		else
			printf("Error\n");
		ft_print_lst(stacka);
		ft_swap(&stacka, 'a');
		printf("SWAP\n");
		ft_print_lst(stacka);
		ft_push(&stacka, &stackb, 'b');
		printf("PUSH\n");
		printf("STACK A\n");
		ft_print_lst(stacka);
		printf("STACK B\n");
		ft_print_lst(stackb);
		ft_push(&stackb, &stacka, 'a');
		printf("PUSH\n");
		printf("STACK A\n");
		ft_print_lst(stacka);
		printf("STACK B\n");
		ft_print_lst(stackb);
	}
}
