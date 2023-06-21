/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_list_aux.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:39:05 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/20 20:24:47 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*clonnode;
	t_list	*clonlst;
	void	*ptr;

	clonnode = NULL;
	clonlst = NULL;
	while (lst != NULL)
	{
		ptr = f(lst->content);
		clonnode = ft_lstnew(ptr);
		if (clonnode == NULL)
		{
			del(ptr);
			ft_lstclear(&clonlst, del);
			return (NULL);
		}
		ft_lstadd_back(&clonlst, clonnode);
		lst = lst->next;
	}
	return (clonlst);
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void	ft_lstdelone(t_list *lst)
{
	free(lst->content);
	free(lst->index);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*firstnode;
	t_list	*delnode;

	firstnode = *lst;
	delnode = NULL;
	while (firstnode)
	{
		delnode = firstnode;
		firstnode = firstnode->next;
		ft_lstdelone(delnode, del);
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
