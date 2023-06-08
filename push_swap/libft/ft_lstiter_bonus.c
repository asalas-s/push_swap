/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:26:26 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 20:39:34 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* ************************************************************************** */
/* void	ft_lstiter(t_list *lst, void (*f)(void *))                            */
/*                                                                            */
/* Given a list and a pointer to a function, apply the function to the        */
/* contents of each node in the list.                                         */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
