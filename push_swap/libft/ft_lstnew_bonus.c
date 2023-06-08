/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:02:33 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 20:49:29 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* ************************************************************************** */
/* t_list	*ft_lstnew(void *content)                                         */
/*                                                                            */
/* Create a new node and return a pointer to it. To do this, it makes the     */
/* memory reservation with malloc. Assigns the content and makes it point     */
/* to null.                                                                   */
/* ************************************************************************** */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
