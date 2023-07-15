/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:34:05 by asalas-s          #+#    #+#             */
/*   Updated: 2023/07/15 21:47:18 by asalas-s         ###   ########.fr       */
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
	int				ordinal;
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

void		ft_print_olst(t_olist *olst);

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

void		ft_putchar(char c, int fd);
void		ft_putstr(char	*str, int fd);

void		swap(t_list **sorigin);
void		push(t_list **sorigin, t_list **sdest);
void		rotate(t_list **sorigin);
void		rrotate(t_list **sorigin);

void		ft_swapa(t_list **stack, t_olist **olst);
void		ft_swapb(t_list **stack, t_olist **olst);
void		ft_pusha(t_list **stacka, t_list **stackb, t_olist **olst);
void		ft_pushb(t_list **stacka, t_list **stackb, t_olist **olst);
void		ft_rotatea(t_list **stack, t_olist **olst);
void		ft_rotateb(t_list **stack, t_olist **olst);
void		ft_rrotatea(t_list **stack, t_olist **olst);
void		ft_rrotateb(t_list **stack, t_olist **olst);

void		ft_ss(t_list **stacka, t_list **stackb, t_olist **olst);
void		ft_rr(t_list **stacka, t_list **stackb, t_olist **olst);
void		ft_rrr(t_list **stacka, t_list **stackb, t_olist **olst);

char		*ft_parser(int order);
void		ft_lstindex(t_list *lst);

void		ft_orderstack(t_list **stacka, t_list **stackb, t_olist **olst);
void		ft_order_2(t_list **stacka, t_list **stackb, t_olist **olst);
void		ft_order_3(t_list **stacka, t_list **stackb, t_olist **olst);
void		ft_order_4(t_list **stacka, t_list **stackb, t_olist **olst);
void		ft_order_5(t_list **stacka, t_list **stackb, t_olist **olst);
void		ft_order_more(t_list **stacka, t_list **stackb, t_olist **olst);

int			ft_max_value(t_list	*list);
int			ft_min_value(t_list	*list);

void		ft_lstordinal_calc(t_list *lst);
void		ft_lstordinal_init(t_list *lst);

#endif