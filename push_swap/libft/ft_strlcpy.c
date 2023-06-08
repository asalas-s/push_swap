/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:03:50 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 21:14:10 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)            */
/*                                                                            */
/* Given a string src copies it to another string dst making sure there will  */
/* be room for the terminator character and that dstsize characters           */
/* will be copied.                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	l;

	l = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while ((src[i] != '\0') && (i < dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (l);
}
