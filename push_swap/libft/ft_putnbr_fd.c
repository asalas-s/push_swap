/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:49:45 by asalas-s          #+#    #+#             */
/*   Updated: 2022/10/13 21:01:26 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* ************************************************************************** */
/* void	ft_putnbr_fd(int n, int fd)                                           */
/*                                                                            */
/* Given an integer, it is passed to the file descriptor fd, converting each  */
/* digit into a character and preserving the sign in case it is negative.     */
/* ************************************************************************** */

void	ft_putnbr_fd(int n, int fd)
{
	int	p_ent;
	int	r;

	p_ent = n / 10;
	r = n % 10;
	if (p_ent != 0)
	{
		ft_putnbr_fd(p_ent, fd);
	}
	else
	{
		if (r < 0)
		{	
			ft_putchar_fd('-', fd);
		}
	}	
	if (r < 0)
	{
		r = -r;
	}
	ft_putchar_fd((r + '0'), fd);
}
