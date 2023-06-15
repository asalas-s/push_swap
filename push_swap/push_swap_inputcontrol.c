/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_inputcontrol.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 23:40:16 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/15 22:20:09 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_number_format_ok(const char *str)
{
	int		i;

	i = 0;
	while (ft_isspace(str[i]))
			i++;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '\0')
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

int	ft_validate_imput(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!ft_number_format_ok(argv[i]))
			return (0);
		if (!ft_number_limits(argv[i]))
			return (0);
		i++;
	}
	i = 1;
	return (1);
}

t_list	*ft_get_arg(int argc, char **argv)
{
	t_list	*stack;
	t_list	*node;
	int		num;

	stack = NULL;
	while (argc > 1)
	{
		num = atoi(argv[argc - 1]);
		node = ft_lstnew(num);
		if (node == NULL)
			return (NULL);
		ft_lstadd_front(&stack, node);
		argc--;
	}
	return (stack);
}