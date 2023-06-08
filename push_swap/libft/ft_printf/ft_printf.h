/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:59:28 by asalas-s          #+#    #+#             */
/*   Updated: 2022/11/02 21:19:01 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "./libft/libft.h"

typedef struct s_print
{
	va_list	args;
	int		minus;
	int		zero;
	int		plus;
	int		blank;
	int		hash;
	int		wdt;
	int		point;
	int		pre;
	int		percent;
	int		is_zero;
	int		ret;
	int		sum;
	int		index;
	char	conversion;
}	t_print;

ssize_t	ft_putcharmod_fd(char c, int fd);
ssize_t	ft_putstrmod_fd(char *s, int fd);
ssize_t	ft_putnbrmod_fd(int n, int fd);

void	ft_read_format(t_print *tab, char const *str);
ssize_t	ft_format_output(t_print *tab, char const *str);

t_print	*ft_init_format(t_print *tab);
t_print	*ft_load_format(t_print *tab, char c);
int		ft_isflag(char c);
int		ft_isdot(char c);
int		ft_istype(char c);

ssize_t	ft_putnbrhex_fd(unsigned int n, int fd);
ssize_t	ft_putnbrhexup_fd(unsigned int n, int fd);
ssize_t	ft_putpointer_fd(unsigned long int n, int fd);
ssize_t	ft_putnbrunsigned_fd(unsigned int n, int fd);

int		ft_printf(char const *fstr, ...);

#endif