/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:47:34 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:46:44 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* int	ft_memcmp(const void *s1, const void *s2, size_t n)                   */
/*                                                                            */
/* Given two memory positions it compares them up to position n at most.      */
/* If the memory content are equal, it returns 0, if they are different,      */
/* it returns the subtraction of the characters of the memory positions in    */
/* the position in which they differ.                                         */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_c;
	unsigned char	*s2_c;
	size_t			i;

	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_c[i] == s2_c[i])
				i++;
		else
			return (s1_c[i] - s2_c[i]);
	}
	return (0);
}
