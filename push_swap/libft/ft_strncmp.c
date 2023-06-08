/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:59:57 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:47:31 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

/* ************************************************************************** */
/* int	ft_strncmp(const char *s1, const char *s2, size_t n)                  */
/*                                                                            */
/* Given two strings it compares them up to position n at most.               */
/* If the strings are equal, it returns 0, if they are different, it returns  */
/* the subtraction of the characters of the strings in the position           */
/* in which they differ.                                                      */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
