/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:49:36 by codespace         #+#    #+#             */
/*   Updated: 2025/04/21 16:00:55 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_node **des, t_node **src)
{
    t_node  *temp_node;
    
    if (!*src)
        return ;
    temp_node = *src;
    *src = (*src)->next;
    (*src)->prev = NULL;
    temp_node->prev = NULL;
    if(!des)
    {
        *des = temp_node;
        temp_node->next = NULL;
    }
    else
    {
        temp_node->next = *des;
        temp_node->next->prev = temp_node;
        *des = temp_node;
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