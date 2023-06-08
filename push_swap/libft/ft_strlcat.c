/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:02:57 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 21:10:29 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)            */
/*                                                                            */
/* Concatenates the src string to the dst string with a buffer                */
/* size of dstsize. The return value of the function will be the length of    */
/* the string src + dstsize in case the string src cannot be added.           */
/* In all other cases the return value will be the sum of the length dst + src*/
/* Depending on the value that this has, the programmer must know if the      */
/* concatenation was successful or if the src string had to be trimmed        */
/* To do this, it goes through the dst string until it reaches the termination*/
/* character. From there it begins to concatenate the src string always       */
/* ensuring a gap for the terminator character.                               */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dst_l;
	unsigned int	src_l;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	i = 0;
	j = 0;
	if ((dstsize == 0) || (dstsize <= dst_l))
		return (src_l + dstsize);
	while (dst[i] != '\0')
		i++;
	while ((src[j] != '\0') && (j < dstsize - dst_l - 1))
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dst_l + src_l);
}
