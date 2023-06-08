/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:50:11 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:07:24 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* ************************************************************************** */
/* char	*ft_strjoin(char const *s1, char const *s2)                           */
/*                                                                            */
/* Given two strings allocate memory to save the union of both                */
/* strings into one.                                                          */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		strjoin_len;

	strjoin_len = ft_strlen(s1) + ft_strlen(s2);
	strjoin = (char *)malloc ((strjoin_len + 1) * sizeof(char));
	if (strjoin == NULL)
		return (NULL);
	ft_strlcpy(strjoin, s1, ft_strlen(s1) + 1);
	ft_strlcat(strjoin, s2, strjoin_len + 1);
	return (strjoin);
}
