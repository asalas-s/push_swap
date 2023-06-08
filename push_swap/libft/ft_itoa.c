/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:43:20 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/08 23:26:45 by asalas-s         ###   ########.fr       */
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
	int		digit;
	char	*number;

	i = ft_number_len(n);
	number = (char *)malloc ((i + 1) * sizeof(char));
	if (number == NULL)
		return (NULL);
	number[i] = '\0';
	i--;
	if (n < 0)
		number[0] = '-';
	if (n == 0)
		number[0] = '0';
	while (n != 0)
	{	
		digit = n % 10;
		if (digit < 0)
			digit = -digit;
		number[i] = (digit + '0');
		n = (n / 10);
		i--;
	}
	return (number);
}
