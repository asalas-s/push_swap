/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_others.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novasol <novasol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:31:54 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/23 13:26:31 by novasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_lst(t_list *lst)
{
	while (lst)
	{
		printf("%d\n", lst->content);
		lst = lst->next;
	}
}

void	ft_lstindex(t_list *lst)
{
	int	index;

	index = 0;
	while (lst)
	{
		lst->index = index;
		lst = lst->next;
		index++;
	}
}

int	ft_isinorder(t_list *lst)
{
	while (lst)
	{
		if (lst->next)
		{
			if (((lst->next)->content) < (lst->content))
				return (0);
		}
		lst = lst->next;
	}
	return (1);
}
