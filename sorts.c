/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:07:29 by codespace         #+#    #+#             */
/*   Updated: 2025/05/03 23:39:23 by marvin           ###   ########.fr       */
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

// void    sort_five(t_node **a, t_node **b)
// {
//     t_node *min;
    
//     while (stack_len(*a) > 3)
//     {
//         min = findmin(*a);
//         if (*a == min)
//             pb(b, a);
//         else if ((*a)->next == min)
//             sa(a);
//         else 
//         {
//             if (min_pos_from_top(*a, min) <= stack_len(*a) / 2)
//                 ra(a);
//             else
//                 rra(a);
//         }
//     }
//     sort_three(a);
//     pa(a, b);
//     pa(a, b);
//     if ((*a)->value > (*a)->next->value)
//         sa(a);
// }

// void    sort_five(t_node **a, t_node **b)
// {
//     t_node *min;
//     int     pos;
//     int     len;

//     while (stack_len(*a) > 3)
//     {
//         min = findmin(*a);
//         pos = min_pos_from_top(*a, min);
//         len = stack_len(*a);
//         if (pos <= len / 2)
//         {
//             while ((*a) != min)
//                 ra(a);
//         }
//         else
//         {
//             while ((*a) != min)
//                 rra(a);
//         }
//         pb(b, a);
//     }
//     sort_three(a);
//     pa(a, b);
//     pa(a, b);
// }

void	sort_five(t_node **a, t_node **b)
{
	t_node	*min;

	// Push the two smallest elements to stack B
	while (stack_len(*a) > 3)
	{
		min = findmin(*a); // you already have this function

		// Rotate until min is at the top
		while (*a && (*a)->value != min->value)
			ra(a);
		pb(a, b);
	}

	// Sort the remaining 3 elements
	sort_three(a);

	// Push back from B to A
	if (*b)
		pa(a, b);
	if (*b)
		pa(a, b);
}


void radix_sort(t_node **a, t_node **b) 
{
    int max_bits;
    int biggest_n;
    int i;
    int j;
    int size;

    biggest_n = find_biggest(*a);
    max_bits = find_maxbit(biggest_n);
    i = 0;
    while (i < max_bits) 
    {
        j = 0;
        size = stack_len(*a);
        while (j < size) 
        {
            if (((*a)->index >> i) & 1)
                ra(a);
            else
                pb(b, a);
            j++;
        }
        
        while (*b)
        {
            pa(a, b);
        }
        i++;
    }
}

