/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:27:20 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/09 22:23:00 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_get_arg(int len, char **args)
{
	t_list	*stack;
	t_list	*node;
	int		num;

	stack = NULL;
	while (len > 1)
	{
		num = atoi(args[len - 1]);
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
	t_list	*stack;
	t_list	*list;
	int		num;
	int		min;
	int		max;
	int		media;

	if (argc > 1)
	{
		stack = ft_get_arg(argc, argv);
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
		printf("Maximo %d\n", max);
		media = max + min / 2;
		printf("Media %d\n", media);
	}
}

