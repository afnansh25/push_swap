/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:54:06 by codespace         #+#    #+#             */
/*   Updated: 2025/04/30 13:13:11 by codespace        ###   ########.fr       */
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
	new->prev = NULL;
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
	new->prev = last;
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

// int	initialize_stack(t_node **stack, char **args)
// {
// 	int	i;
// 	int	error;
// 	int	value;

// 	i = 0;
// 	while (args[i])
// 	{
// 		error = 0;
// 		if (!is_valid_input(args[i]))
// 			write_error();
// 		value = ft_atoi(args[i], &error);
// 		if (error)
// 			write_error();
// 		add_node(stack, value);
// 		i++;
// 	}
// 	if (has_duplicate(*stack))
// 		write_error();
// 	assign_indexes(*stack); 
// 	return (1);
// }

// int	initialize_stack(t_node **stack, char **args)
// {
// 	int	i;
// 	int	error;
// 	int	value;

// 	i = 0;
// 	while (args[i])
// 	{
// 		error = 0;
// 		if (!is_valid_input(args[i]))
// 			write(1, "Failed is_valid_input\n", 22);
// 		value = ft_atoi(args[i], &error);
// 		if (error)
// 			write(1, "Failed ft_atoi\n", 16);
// 		add_node(stack, value);
// 		i++;
// 	}
// 	if (has_duplicate(*stack))
// 		write(1, "Duplicate detected\n", 20);
// 	assign_indexes(*stack); 
// 	return (1);
// }

int initialize_stack(t_node **stack, char **args) {
    int i;
	int	error;
	int value;

	i = 0;
    while (args[i]) {
        error = 0;
        if (!is_valid_input(args[i]))
            return(0);
        value = ft_atoi(args[i], &error);
        if (error || !add_node(stack, value))
            return (0);
        i++;
    }
    if (has_duplicate(*stack))
        return(0);
    assign_indexes(*stack);
    return (1);
}
 