/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_inputcontrol.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 23:40:16 by asalas-s          #+#    #+#             */
/*   Updated: 2023/07/13 22:43:32 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_number_format_ok(const char *str)
{
	int		i;
	int		empty;

	i = 0;
	empty = 0;
	while (ft_isspace(str[i]))
			i++;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	empty = i;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if ((str[i] == '\0') && (i != empty))
		return (1);
	else
		return (0);
}

int	ft_number_limits(const char *str)
{
	long int	limits;

	limits = ft_atoli(str);
	if ((limits <= INT_MIN) || (limits >= INT_MAX))
		return (0);
	return (1);
}

t_list	*ft_insert_arg(t_list	*stack, char *argv)
{
	t_list	*node;
	int		num;

	num = atoi(argv);
	node = ft_lstnew(num);
	if (node == NULL)
		return (NULL);
	ft_lstadd_back(&stack, node);
	return (stack);
}

int	ft_duplicate_numbers(t_list *stack)
{
	int		rep;
	int		num;
	t_list	*loop1;
	t_list	*loop2;

	rep = 0;
	loop1 = stack;
	loop2 = stack;
	while (loop1)
	{
		num = loop1->content;
		while (loop2)
		{
			if (num == loop2->content)
				rep++;
			loop2 = loop2->next;
		}
		if (rep > 1)
			return (1);
		rep = 0;
		loop1 = loop1->next;
		loop2 = stack;
	}
	return (0);
}

t_list	*ft_validate_imput(int argc, char **argv)
{
	int		i;
	t_list	*stacka;

	i = 1;
	stacka = NULL;
	while (i < argc)
	{
		if (!ft_number_format_ok(argv[i]))
			return (NULL);
		if (!ft_number_limits(argv[i]))
			return (NULL);
		i++;
	}
	i = 1;
	while (i < argc)
	{
		stacka = ft_insert_arg(stacka, argv[i]);
		i++;
	}
	if (ft_duplicate_numbers(stacka))
	{
		ft_lstclear(&stacka);
		return (NULL);
	}
	return (stacka);
}
