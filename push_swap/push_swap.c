/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalas-s <asalas-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:27:20 by asalas-s          #+#    #+#             */
/*   Updated: 2023/06/25 19:10:43 by asalas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stacka;
	t_list	*stackb;

	stacka = NULL;
	stackb = NULL;

	if (argc > 1)
	{
		stacka = ft_validate_imput(argc, argv);
		if (!stacka)
			printf("Error\n");
		if (!ft_isinorder(stacka))
			printf("HAY QUE ORDENAR\n");
		ft_lstclear(stacka);
	}
}
