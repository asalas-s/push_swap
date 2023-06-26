/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_list_aux.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:39:05 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/26 22:22:15 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstdelone(t_list *lst)
{
	free(lst);
}

void	ft_lstclear(t_list **lst)
{
	t_list	*firstnode;
	t_list	*delnode;

	firstnode = *lst;
	delnode = NULL;
	while (firstnode)
	{
		delnode = firstnode;
		firstnode = firstnode->next;
		ft_lstdelone(delnode);
	}
	*lst = NULL;
}

int	ft_lstvalueexits(t_list *lst, int dat)
{
	while (lst)
	{
		if (lst->content == dat)
			return (1);
		lst = lst->next;
	}
	return (0);
}

int	ft_lstlen(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

t_list	*ft_lstpos(t_list *lst, int index)
{
	while (index)
	{
		lst = lst->next;
		index--;
	}
	return (lst);
}
