/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:25:51 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 20:35:46 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* void	ft_lstclear(t_list **lst, void (*del)(void *))                        */
/*                                                                            */
/* Given a list, it removes all the nodes it contains, freeing memory         */
/* in the process. To do this, it iterates the list and eliminates each node  */
/* taking into account saving the pointer that points to the next one so that */
/* no element of the list is left hanging.                                    */
/* To remove the nodes call the ft_lstdelone function.                        */
/* ************************************************************************** */

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
