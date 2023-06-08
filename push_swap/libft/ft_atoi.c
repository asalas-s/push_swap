/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:20:04 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 20:36:15 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

/* ************************************************************************** */
/* static int	ft_isspace(int c)                                             */
/*                                                                            */
/* This function determines if the character passed to it as an argument      */
/* is considered a space/separator.                                           */
/* Returns 1 if the condition is true and 0 if it is not.                     */
/* ************************************************************************** */

static int	ft_isspace(int c)
{
	unsigned char	c_u;

	c_u = (unsigned char)c;
	if ((c_u == '\t') || (c_u == '\n') || (c_u == '\v')
		|| (c_u == '\f') || (c_u == '\r') || (c_u == ' '))
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/* int	ft_atoi(const char *str)                                              */
/*                                                                            */
/* This function converts the string str to an integer.                       */
/* To do this, first remove all space/separator characters                    */
/* at the beginning of the string.                                            */
/* After this determine the sign of the number.                               */
/* To determine the sign, it analyzes the string if it finds a '-'            */
/* the number is negative, if it finds a '+' character or it does not find    */
/* any sign modifier it assumes that it is positive.                          */
/* After this performs the conversion from string to integer.                 */
/* Returns the integer represented in the character string.                   */
/* In this function it is important to take into account the ranges of numbers*/
/* Any number outside the integer range will give indeterminate behavior.     */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		i;
	int		signo;
	int		num;

	i = 0;
	signo = 1;
	num = 0;
	while (ft_isspace(str[i]) == 1)
			i++;
	if (str[i] == '-')
		signo = -signo;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * signo);
}
