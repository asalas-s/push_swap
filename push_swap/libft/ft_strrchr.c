/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:07:24 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:51:26 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* char	*ft_strrchr(const char *s, int c)                                     */
/*                                                                            */
/* Finds the character c (passed as an integer) in the string s starting at   */
/* the end. If it returns a pointer to the position it is in,                 */
/* if not it returns null.                                                    */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c_c;

	i = 0;
	c_c = (char)c;
	while (s[i] != '\0')
	{
		i++;
	}
	if (c_c == '\0')
		return ((char *)&s[i]);
	else
	{
		while (i >= 0)
		{
			if (s[i] == c_c)
				return ((char *)&s[i]);
			else
				i--;
		}
		return (NULL);
	}
}
