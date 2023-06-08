/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:02:01 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:50:37 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* char	*ft_strchr(const char *s, int c)                                      */
/*                                                                            */
/* Finds the character c (passed as an integer) in the string s starting at   */
/* the beginning. If it returns a pointer to the position it is in,           */
/* if not it returns null.                                                    */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	else
		return (NULL);
}
