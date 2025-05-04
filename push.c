/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:49:36 by codespace         #+#    #+#             */
/*   Updated: 2025/05/04 09:18:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_node **des, t_node **src)
{
    t_node  *temp_node;
    
    if (!des || !*des)
        return ;
    temp_node = *des;
    *des = (*des)->next;
    if(!*src)
    {
        temp_node->next = NULL;
        (*src) = temp_node;
    }
    else
    {
        temp_node->next = *src;
        *src = temp_node;
    }
}

void    pa(t_node **b, t_node **a)
{
    push(a, b);
    write (1, "pa\n", 3);
}

void    pb(t_node **a, t_node **b)
{
    push(b, a);
    write (1, "pb\n", 3);
}