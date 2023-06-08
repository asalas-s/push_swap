/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:59:04 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:22:38 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* void	*ft_memset(void *b, int c, size_t len)                                */
/*                                                                            */
/* Fills len 1-byte memory locations (as if they were unsigned characters)    */
/* from the given position b.                                                 */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
		ptr[i++] = (unsigned char)c;
	return (b);
}
