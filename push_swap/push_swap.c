/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:27:20 by asalas-s          #+#    #+#             */
/*   Updated: 2023/07/13 22:50:29 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stacka;
	t_list	*stackb;
	t_olist	*olst;

	stacka = NULL;
	stackb = NULL;
	olst = NULL;
	if (argc > 1)
	{
		stacka = ft_validate_imput(argc, argv);
		if (!stacka)
			ft_putstr("Error\n", 2);
		if (!ft_isinorder(stacka))
		{
			ft_lstindex(stacka);
			ft_orderstack(&stacka, &stackb, &olst);
		}
		ft_orderlstclear(&olst);
		ft_lstclear(&stacka);
		ft_lstclear(&stackb);
	}
}
