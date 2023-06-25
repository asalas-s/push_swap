/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_olist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:15:07 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/25 19:15:46 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_olist	*ft_lstnew(int code)
{
	t_olist	*new;

	new = (t_olist *)malloc(sizeof(t_olist));
	if (new == NULL)
		return (NULL);
	new->code = code;
	new->next = NULL;
	return (new);
}

t_olist	*ft_orderlstlast(t_olist *olst)
{
	if (olst)
	{
		while (olst->next)
			olst = olst->next;
	}
	return (olst);
}

void	ft_orderlstadd_back(t_olist **olst, t_olist *onew)
{
	t_olist	*last;

	if (*olst == NULL)
		*olst = onew;
	else
	{
		last = ft_ordelstlast(*olst);
		last->next = onew;
	}
}

void	ft_orderlstdelone(t_olist *olst)
{
	free(olst);
}

void	ft_orderlstclear(t_olist **olst)
{
	t_olist	*firstnode;
	t_olist	*delnode;

	firstnode = *olst;
	delnode = NULL;
	while (firstnode)
	{
		delnode = firstnode;
		firstnode = firstnode->next;
		ft_orderlstdelone(delnode);
	}
	*olst = NULL;
}
