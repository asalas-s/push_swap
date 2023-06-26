/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:27:20 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/26 22:46:02 by asalas-s         ###   ########.fr       */
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
			ft_putstr("Error\n");
		if (!ft_isinorder(stacka))
			ft_putstr("HAY QUE ORDENAR\n");
		ft_lstclear(&stacka);
	}
}
