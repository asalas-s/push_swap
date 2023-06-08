/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:48:17 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:43:23 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* void	*ft_memmove(void *dst, const void *src, size_t len)                   */
/*                                                                            */
/* Copies n memory locations (taken as characters) from src to dst            */
/* taking into account possible overlaps.                                     */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst_c;
	unsigned char	*src_c;

	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	i = 0;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	while (i < len)
	{
		if (src_c < dst_c)
			dst_c[len - i - 1] = src_c[len - i - 1];
		else
			dst_c[i] = src_c[i];
		i++;
	}
	return (dst);
}
