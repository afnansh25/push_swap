/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:07:29 by codespace         #+#    #+#             */
/*   Updated: 2025/04/24 14:46:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_two(t_node **a)
{
    if ((*a)->value > (*a)->next->value)
        sa(a);
}

void    sort_three(t_node **a)
{
    t_node  *max;

    max = findmax(*a);
    if (max == *a)
        ra(a);
    else if ((*a)->next == max)
        rra(a);
    if ((*a)->value > (*a)->next->value)
        sa(a);
}

void    sort_five(t_node **a, t_node **b)
{
    t_node *min;
    
    while (stack_len(*a) > 3)
    {
        min = findmin(*a);
        if (*a == min)
            pb(b, a);
        else if ((*a)->next && (*a) == min)
            sa(a);
        else 
            ra(a);
    }
    sort_three(a);
    if (*b)
        pa(a, b);
    if (*b)
        pa(a, b);
    if ((*a)->value > (*a)->next->value)
        sa(a);
}

void	radix_sort(t_node **a, t_node **b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

    size = stack_len(*a);
	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
        size = stack_len(*a);
		j = 0;
		while (j < size)
		{
			if ((((*a)->index >> i) & 1) == 0)
				pb(b, a);
			else
				ra(a);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
