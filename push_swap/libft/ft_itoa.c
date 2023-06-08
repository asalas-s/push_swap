/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:43:20 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 20:35:36 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* ************************************************************************** */
/* static int	ft_number_len(int n)                                          */
/*                                                                            */
/* Determines how many digits make up the integer passed as a parameter.      */
/* ************************************************************************** */

static int	ft_number_len(int n)
{
	int	size;

	size = 1;
	if (n == 0)
		return (size);
	if (n < 0)
		size = size + 1;
	while ((n / 10) != 0)
	{
		n = (n / 10);
		size++;
	}
	return (size);
}

/* ************************************************************************** */
/* static int	ft_limits(int n, char *number, int len)                       */
/*                                                                            */
/* Determines if the number given as parameter is one of the cases that can   */
/* cause problems when operating with it. The minimum negative integer value  */
/* and zero. In both cases it operates on the string where the number is      */
/* going to be stored, filling in the last value of the string.               */
/* ************************************************************************** */

static int	ft_limits(int n, char *number, int len)
{
	if ((n == -2147483648) || (n == 0))
	{
		number[len - 1] = (((n % 10) * -1) + '0');
		return (1);
	}
	return (0);
}

/* ************************************************************************** */
/* char	*ft_itoa(int n)                                                       */
/*                                                                            */
/* Returns the number of digits of the number passed as a parameter.          */
/* Makes the memory reservation with malloc taking into account the '\0'      */
/* terminator.                                                                */
/* If one of the conflicting numbers solves the situation with ft_limits      */
/* If the number is negative convert it to positive and enter the '-' at the  */
/* beginning of the output string and after this the conversion begins digit  */
/* by digit of the integer in character.                                      */
/* The string containing the integer with the '-' sign is returned if         */
/* be negative and end in '\0'                                                */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	int		i;
	char	*number;

	i = ft_number_len(n);
	number = (char *)malloc ((i + 1) * sizeof(char));
	if (number == NULL)
		return (NULL);
	number[i] = '\0';
	if (ft_limits(n, number, i) == 1)
	{
		n = (n / 10);
		i--;
	}
	if (n < 0)
	{
		number[0] = '-';
		n = -n;
	}
	while (n > 0)
	{	
		number[i - 1] = ((n % 10) + '0');
		n = (n / 10);
		i--;
	}
	return (number);
}
