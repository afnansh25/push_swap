/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:56:26 by codespace         #+#    #+#             */
/*   Updated: 2025/04/24 13:40:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (ac < 2 || !av[1][0])
		return (0);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	initialize_stack(&a, av + 1);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else if (stack_len(a) == 5)
			sort_five(&a, &b);
		else
		{
			radix_sort(&a, &b);
			print_stack(a);
		}
	}
	free_stack(&a);
	free_stack(&b);
	return (0);
}


