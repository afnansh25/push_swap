/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:56:26 by codespace         #+#    #+#             */
/*   Updated: 2025/05/04 15:14:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_node *a = NULL;
    t_node *b = NULL;

    a = NULL;
    b = NULL;
    if (ac < 2)
        return (0);
    parse_args(ac, av, &a);
    sort_stack(&a, &b);
    free_stack(&a);
    free_stack(&b);
    return (0);
}
