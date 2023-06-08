/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:50:30 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 22:35:15 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* ************************************************************************** */
/* char	*ft_substr(char const *s, unsigned int start, size_t len)             */
/*                                                                            */
/* Allocate memory for a substring formed from the start position of s and    */
/* with length len.                                                           */
/* Returns an empty string if the start position is greater than the length   */
/* of the source string, if the size of the substring is 0, or if the         */
/* original string is an empty string.                                        */
/* If we can get a truncated substring we will get it by always ensuring      */
/* the termination character. If possible then the entire substring of up     */
/* to len characters is returned.                                             */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	s_len;
	unsigned int	substr_len;

	s_len = ft_strlen(s);
	if ((start >= (s_len + 1)) || ((unsigned int)len == 0) || (s_len == 0))
	{
		substr = (char *)malloc(sizeof(char));
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (s_len >= (start + (unsigned int)len))
		substr_len = (unsigned int)len + 1;
	else
		substr_len = s_len - start + 1;
	substr = (char *)malloc(substr_len * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy (substr, &s[start], substr_len);
	return (substr);
}
