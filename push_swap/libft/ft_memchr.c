/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:59:04 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:15:08 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

/* ************************************************************************** */
/* void	*ft_memchr(const void *s, int c, size_t n)                            */
/*                                                                            */
/* Given memory location an integer c and size n, the function searches       */
/* up to n consecutive bytes from memory location s for the first             */
/* byte converted to an unsigned character equal to c if not returns NULL     */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_clone;

	i = 0;
	s_clone = (unsigned char *)s;
	while (i < n)
	{
		if (*s_clone == (unsigned char)c)
			return (s_clone);
		s_clone++;
		i++;
	}
	return (NULL);
}
