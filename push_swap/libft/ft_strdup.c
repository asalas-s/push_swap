/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:00:08 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:11:04 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* char	*ft_strdup(const char *s1)                                            */
/*                                                                            */
/* Given a string allocates the necessary memory and creates a copy of it.    */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	int		s1_l;
	char	*s2;

	s1_l = ft_strlen(s1);
	s2 = (char *)malloc ((s1_l + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	else
	{	
		ft_strlcpy(s2, s1, s1_l + 1);
		return (s2);
	}
}
