/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:42:27 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 20:36:35 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* void	*ft_calloc(size_t count, size_t size)                                 */
/*                                                                            */
/* Given a memory address and a number n, the function pads the memory        */
/* with zeros considering each byte to be an unsigned char.                   */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;
	size_t	i;

	s = (char *)malloc (count * size * sizeof(char));
	if (s == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < (count * size))
			s[i++] = 0;
		return (s);
	}
}
