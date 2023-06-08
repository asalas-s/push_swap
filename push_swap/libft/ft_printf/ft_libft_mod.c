/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftmod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:50:42 by asalas-s          #+#    #+#             */
/*   Updated: 2022/11/02 20:54:17 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putcharmod_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

ssize_t	ft_putstrmod_fd(char *s, int fd)
{
	if (s != NULL)
		return (write(fd, s, ft_strlen(s)));
	else
		return (write(fd, "(null)", 6));
}

ssize_t	ft_putnbrmod_fd(int n, int fd)
{
	int	ret;
	int	sum;

	ret = 0;
	sum = 0;
	if ((n / 10) != 0)
		ret = ft_putnbrmod_fd((n / 10), fd);
	else
		if ((n % 10) < 0)
			ret = ft_putcharmod_fd('-', fd);
	if (ret == -1)
		return (-1);
	else
		sum += ret;
	if ((n % 10) < 0)
		ret = ft_putcharmod_fd((-(n % 10) + '0'), fd);
	else
		ret = ft_putcharmod_fd(((n % 10) + '0'), fd);
	if (ret == -1)
		return (-1);
	else
		sum += ret;
	return (sum);
}
