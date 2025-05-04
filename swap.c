/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:26:22 by codespace         #+#    #+#             */
/*   Updated: 2025/05/04 09:19:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_node **s)
{
    t_node *temp_node;
    if (!*s || !(*s)->next)
        return ;
    temp_node = *s;
    *s = (*s)->next;
    temp_node->next = (*s)->next;
    (*s)->next = temp_node;
}

void    sa(t_node **a)
{
    swap(a);
    write (1, "sa\n", 3);
}

void    sb(t_node **b)
{
    swap(b);
    write (1, "sb\n", 3);
}

void    ss(t_node **a, t_node **b)
{
    swap(a);
    swap(b);
    write (1, "ss\n", 3);
}