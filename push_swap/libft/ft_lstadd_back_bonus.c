/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:08:12 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 20:35:26 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* void	ft_lstadd_back(t_list **lst, t_list *new)                             */
/*                                                                            */
/* Adds a node passed as a parameter to the end of a list.                    */
/* If the list is empty it adds it as the first node.                         */
/* To find the last node in the list, use the ft_lstlast function.            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
