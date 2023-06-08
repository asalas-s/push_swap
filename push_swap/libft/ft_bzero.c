/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:42:05 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 20:36:27 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

/* ************************************************************************** */
/* void	ft_bzero(void *s, size_t n)                                           */
/*                                                                            */
/* Given a memory address and a number n, the function pads the memory        */
/* with zeros considering each byte to be an unsigned char.                   */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
