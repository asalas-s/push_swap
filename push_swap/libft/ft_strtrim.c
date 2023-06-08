/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:50:26 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:58:45 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* ************************************************************************** */
/* char	*ft_strtrim(char const *s1, char const *set)                          */
/*                                                                            */
/* Removes all characters present in the string set from the beginning and    */
/* end of the string s1 and returns a clean copy of the string (making the    */
/* necessary memory allocation for the new string)                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		i;

	i = 0;
	while ((i <= (int)ft_strlen(s1)) && ft_strchr(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1);
	while ((i > start) && ft_strchr(set, s1[i - 1]))
			i--;
	return (ft_substr(s1, start, (i - start)));
}
