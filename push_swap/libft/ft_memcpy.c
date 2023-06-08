/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:47:55 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:41:50 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* void	*ft_memcpy(void *dst, const void *src, size_t n)                      */
/*                                                                            */
/* Copies n memory locations (taken as characters) from src to dst without    */
/* taking into account possible overlaps.                                     */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*src_org;
	char	*dst_org;

	dst_org = (char *)dst;
	src_org = (char *)src;
	i = 0;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	while (i < n)
	{
		dst_org[i] = src_org[i];
		i++;
	}
	return (dst);
}
