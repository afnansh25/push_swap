/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:14:36 by codespace         #+#    #+#             */
/*   Updated: 2025/04/24 13:39:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	sstr = (char *)malloc(sizeof(char) * len + 1);
	if (!sstr)
		return (NULL);
	while (i < len)
	{
		sstr[i++] = s[start++];
	}
	sstr[i] = '\0';
	return ((char *)sstr);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	print_stack(t_node *stack)
{
	while (stack)
	{
		printf("val: %d, index: %d\n", stack->value, stack->index);
		stack = stack->next;
	}
}
