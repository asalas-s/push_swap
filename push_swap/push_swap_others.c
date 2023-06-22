/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_others.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:31:54 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/22 23:32:44 by asalas-s         ###   ########.fr       */
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
