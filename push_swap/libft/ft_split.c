/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:49:53 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 23:06:54 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* ************************************************************************** */
/* static size_t	ft_pasing_sep(const char *s, int c, int index)            */
/*                                                                            */
/* the function skips the separators and returns the first index where        */
/* we did not find a separator                                                */
/* ************************************************************************** */

static size_t	ft_pasing_sep(const char *s, int c, int index)
{
	while ((s[index] != '\0') && (s[index] == c))
		index++;
	return (index);
}

/* ************************************************************************** */
/* static size_t	ft_index_end(const char *s, int c, int index)             */
/*                                                                            */
/* the function returns the position of the first separator found after a word*/
/* ************************************************************************** */

static size_t	ft_index_end(const char *s, int c, int index)
{
	while ((s[index] != '\0') && (s[index] != c))
		index++;
	return (index);
}

/* ************************************************************************** */
/* static size_t	ft_count_words(char const *s, char c)                     */
/*                                                                            */
/* the function returns the number of words                                   */
/* ************************************************************************** */

static size_t	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i = ft_pasing_sep(s, c, i);
		if ((s[i] != c) && (s[i] != '\0'))
			words++;
		i = ft_index_end(s, c, i);
	}
	return (words);
}

/* ************************************************************************** */
/* static char	**ft_freemem(char **ret)                                      */
/*                                                                            */
/* the function free the memory allocated in case of failure                  */
/* ************************************************************************** */

static char	**ft_freemem(char **ret)
{
	size_t	i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return (NULL);
}

/* ************************************************************************** */
/* char	**ft_split(char const *s, char c)                                     */
/*                                                                            */
/* It counts the number of words, makes the memory reservation for the array  */
/* that will contain the pointers to each word.                               */
/* From there it reads the original string, extracts each word, stores it in  */
/* a string (reserving memory for it) and saves it in the array of words.     */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
	int		words;
	int		p;
	int		p_prev;
	char	**return_out;
	int		i;

	words = ft_count_words(s, c);
	return_out = (char **)malloc((words + 1) * sizeof(char *));
	if (return_out == NULL)
		return (NULL);
	return_out[words] = NULL;
	p = 0;
	p_prev = 0;
	i = 0;
	while (i < words)
	{
		p_prev = ft_pasing_sep(s, c, p);
		p = ft_index_end(s, c, p_prev);
		return_out[i] = ft_substr(s, p_prev, (p - p_prev));
		if (return_out[i] == NULL)
			return (ft_freemem(return_out));
		p++;
		i++;
	}
	return (return_out);
}
