/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:34:05 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/25 18:44:45 by asalas-s         ###   ########.fr       */
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

typedef struct order_list
{
	int					code;
	struct order_list	*next;
}	t_olist;

t_list		*ft_lstnew(int content);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstdelone(t_list *lst);
void		ft_lstclear(t_list **lst);

t_olist		*ft_orderlstnew(int code);
t_olist		*ft_orderlstlast(t_olist *olst);
void		ft_orderlstadd_back(t_olist **olst, t_olist *onew);
void		ft_orderlstdelone(t_olist *olst);
void		ft_orderlstclear(t_olist **olst);

int			ft_number_format_ok(const char *str);
int			ft_number_limits(const char *str);
t_list		*ft_validate_imput(int argc, char **argv);

int			ft_isdigit(int c);
int			ft_isspace(int c);
int			ft_atoi(const char *str);
long int	ft_atoli(const char *str);

void		ft_print_lst(t_list *lst);
int			ft_lstlen(t_list *lst);
t_list		*ft_lstpos(t_list *lst, int index);
int			ft_isinorder(t_list *lst);

void		ft_swap(t_list **sorigin);
void		ft_push(t_list **sorigin, t_list **sdest);
void		ft_ss(t_list **stacka, t_list **stackb);
void		ft_rotate(t_list **sorigin);
void		ft_rr(t_list **stacka, t_list **stackb);
void		ft_rrotate(t_list **sorigin);
void		ft_rrr(t_list **stacka, t_list **stackb);

#endif