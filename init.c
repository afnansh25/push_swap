/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:54:06 by codespace         #+#    #+#             */
/*   Updated: 2025/05/04 14:13:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"                                                                                                                                                                                                                                                                                                                                                                         

t_node	*create_node(int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}
int	add_node(t_node **stack, int value)
{
	t_node	*new;
	t_node	*last;

	new = create_node(value);
	if (!new)
		return(0);
	if (!*stack)
	{
		*stack = new;
		return (1);
	}
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = new;
	return(1);
}

int	stack_sorted(t_node *s)
{
	while (s && s->next)
	{
		if (s->value > s->next->value)
			return (0);
		s = s->next;
	}
	return (1);
}

void	assign_indexes(t_node *stack)
{
	t_node	*current;
	t_node	*min;
	int		index;
	int		found;

	index = 0;
	while (1)
	{
		min = NULL;
		current = stack;
		found = 0;
		while (current)
		{
			if (current->index == -1)
			{
				if (!min || current->value < min->value)
					min = current;
				found = 1;
			}
			current = current->next;
		}
		if (!found)
			break;
		min->index = index++;
	}
}
