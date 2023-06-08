/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:31:20 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 20:35:52 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* ************************************************************************** */
/* void	ft_lstdelone(t_list *lst, void (*del)(void *))                        */
/*                                                                            */
/* Given a node, it removes the node freeing memory in the process.           */
/* It also deletes de content of the node with de pointer to function pass    */
/* as a parameterin the function.                                             */
/* ************************************************************************** */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
