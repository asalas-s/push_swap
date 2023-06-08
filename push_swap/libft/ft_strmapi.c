/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:50:16 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 21:21:54 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* ************************************************************************** */
/* char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))             */
/*                                                                            */
/* Creates a duplicate of the original string, applies the f functions to     */
/* each character in the string, and returns the mapped string.               */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*smod;
	unsigned int	i;

	i = 0;
	smod = ft_strdup(s);
	if (smod == NULL)
		return (NULL);
	while (smod[i] != '\0')
	{
		smod[i] = f(i, smod[i]);
		i++;
	}
	smod[i] = '\0';
	return (smod);
}
