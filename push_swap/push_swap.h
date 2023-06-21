/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:34:05 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/22 01:24:34 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

t_list		*ft_lstnew(int content);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);

int			ft_number_format_ok(const char *str);
int			ft_number_limits(const char *str);
t_list		*ft_validate_imput(int argc, char **argv);

int			ft_isdigit(int c);
int			ft_isspace(int c);
int			ft_atoi(const char *str);
long int	ft_atoli(const char *str);

void		ft_print_lst(t_list *lst);

void		ft_swap(t_list **sstack, char stack);
void		ft_push(t_list **stackorigin, t_list **stackdest, char stack);

#endif