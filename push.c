/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:49:36 by codespace         #+#    #+#             */
/*   Updated: 2025/05/03 11:21:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void push(t_node **des, t_node **src) {
//     if (!*src) return;
//     t_node *temp = *src;
//     *src = (*src)->next;
//     if (*src)
//         (*src)->prev = NULL;
//     temp->next = *des;
//     if (*des)
//         (*des)->prev = temp;
//     *des = temp;
// }

void    push(t_node **des, t_node **src)
{
    t_node  *temp_node;
    
    if (!src || !*src)
        return ;
    temp_node = *src;
    *src = (*src)->next;
    if (*src)
        (*src)->prev = NULL;
    temp_node->next = NULL;
    temp_node->prev = NULL;
    if(!*des)
    {
        *des = temp_node;
    }
    else
    {
        temp_node->next = *des;
       (*des)->prev = temp_node;
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