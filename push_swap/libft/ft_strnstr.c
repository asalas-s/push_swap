/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:03:41 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:54:29 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* char	*ft_strnstr(const char *haystack, const char *needle, size_t len)     */
/*                                                                            */
/* Look for the needle chain in the haystack chain by searching               */
/* up to len positions.                                                       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len <= 0)
		return (NULL);
	while (haystack[i] != '\0')
	{
		while ((haystack[i + j] == needle[j]) && (haystack[i + j] != '\0'))
		{
			j++;
			if ((needle[j] == '\0') && ((i + j -1) < len))
				return ((char *)&haystack[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
