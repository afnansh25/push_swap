/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:26:22 by codespace         #+#    #+#             */
/*   Updated: 2025/05/03 23:33:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void swap(t_node **s) {
//     if (!*s || !(*s)->next)
//         return;
//     t_node *first = *s;
//     t_node *second = first->next;
//     first->next = second->next;
//     if (second->next)
//         second->next->prev = first;
//     second->prev = NULL;
//     second->next = first;
//     first->prev = second;
//     *s = second;
// }

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