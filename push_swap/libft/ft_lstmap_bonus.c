/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:26:33 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 20:44:41 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* ************************************************************************** */
/* t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))  */
/*                                                                            */
/* Given a list clone the list and apply to each node the function passed as  */
/* pointer. If in the mapping of the original list some memory error occurs,  */
/* the function eliminates all the nodes mapped so far                        */
/* It also ensures that in the event of a malloc failure the content of the   */
/* node on which it failed is removed.                                        */
/* ************************************************************************** */

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
