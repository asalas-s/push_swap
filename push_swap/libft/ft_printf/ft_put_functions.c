/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:34:27 by asalas-s          #+#    #+#             */
/*   Updated: 2022/11/02 21:44:09 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putnbrhex_fd(unsigned int n, int fd)
{
	char	r;
	int		ret;
	int		sum;

	ret = 0;
	sum = 0;
	r = "0123456789abcdef"[n % 16];
	if ((n / 16) != 0)
		ret = ft_putnbrhex_fd((n / 16), fd);
	if (ret == -1)
		return (-1);
	else
		sum += ret;
	ret = ft_putcharmod_fd(r, fd);
	if (ret == -1)
		return (-1);
	else
		sum += ret;
	return (sum);
}

ssize_t	ft_putnbrhexup_fd(unsigned int n, int fd)
{
	char	r;
	int		ret;
	int		sum;

	ret = 0;
	sum = 0;
	r = "0123456789ABCDEF"[n % 16];
	if ((n / 16) != 0)
		ret = ft_putnbrhexup_fd((n / 16), fd);
	if (ret == -1)
		return (-1);
	else
		sum += ret;
	ret = ft_putcharmod_fd(r, fd);
	if (ret == -1)
		return (-1);
	else
		sum += ret;
	return (sum);
}

ssize_t	ft_putpointer_fd(unsigned long int n, int fd)
{
	char	r;
	int		ret;
	int		sum;

	sum = 0;
	ret = 0;
	r = "0123456789abcdef"[n % 16];
	if (n / 16 != 0)
		ret = ft_putpointer_fd(n / 16, fd);
	else
		ret = ft_putstrmod_fd("0x", 1);
	if (ret == -1)
		return (-1);
	else
		sum += ret;
	ret = ft_putcharmod_fd(r, fd);
	if (ret == -1)
		return (-1);
	else
		sum += ret;
	return (sum);
}

ssize_t	ft_putnbrunsigned_fd(unsigned int n, int fd)
{
	unsigned int	r;
	int				ret;
	int				sum;

	ret = 0;
	sum = 0;
	r = n % 10;
	if ((n / 10) != 0)
		ret = ft_putnbrunsigned_fd((n / 10), fd);
	if (ret == -1)
		return (-1);
	else
		sum += ret;
	ret = ft_putcharmod_fd((r + '0'), fd);
	if (ret == -1)
		return (-1);
	else
		sum += ret;
	return (sum);
}
