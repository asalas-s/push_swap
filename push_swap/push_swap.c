/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:27:20 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/15 20:51:12 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_get_arg(int len, char **arguments)
{
	t_list	*stack;
	t_list	*node;
	int		num;

	stack = NULL;
	while (len > 1)
	{
		num = atoi(arguments[len - 1]);
		node = ft_lstnew(num);
		if (node == NULL)
			return (NULL);
		ft_lstadd_front(&stack, node);
		len--;
	}
	return (stack);
}

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
	int		validate;
//	t_list	*stack;
//	t_list	*list;
//	int		num;
//	int		min;
//	int		max;

	if (argc > 1)
	{
		validate = ft_validate_imput(argc, argv);
		printf("Entrada %d\n", validate);
	/*	stack = ft_get_arg(argc, argv);
		list = stack;
		while (list)
		{
			num = list->content;
			printf("%d\n", num);
			list = list->next;
		}
		min = ft_min_valor(stack);
		max = ft_max_valor(stack);
		printf("Minimo %d\n", min);
		printf("Maximo %d\n", max); */
	}
}
