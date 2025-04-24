/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:28:23 by codespace         #+#    #+#             */
/*   Updated: 2025/04/24 13:23:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate(t_node **s)
{
    t_node  *last;
    
    if (!*s ||(*s)->next)
        return ;
    last = last_node(*s);
    last->next = *s;
    *s = (*s)->next;
    (*s)->prev = NULL;
    last->next->prev= last;
    last->next->next = NULL;
}


void	ra(t_node **a)
{
	rotate(a);
		write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	rotate(b);
		write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
		write(1, "rr\n", 3);
}