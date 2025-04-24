/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:59:54 by codespace         #+#    #+#             */
/*   Updated: 2025/04/13 15:56:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	skip_space_and_sign(const char *str, int *sign)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
// 		i++;
// 	if (str[i] == '+' || str[i] == '-')
// 	{
// 		if (str[i] == '-')
// 			*sign = -1;
// 		i++;
// 	}
// 	return (i);
// }
// int	ft_atoi(const char *str, int *error)
// {
// 	int				sign;
// 	unsigned long	result;
// 	int				i;

// 	sign = 1;
// 	result = 0;
// 	*error = 0;
// 	i = skip_space_and_sign(str, &sign);
// 	if (!str[i])
// 		return (*error = 1, 0);
// 	while (str[i] && str[i] >= '0' && str[i] <= '9')
// 	{
// 		result = result * 10 + (str[i++] - '0');
// 		if (is_overflow(result, sign))
// 			return (*error = 1, 0);
// 	}
// 	if (str[i] != '\0')
// 		return (*error = 1, 0);
// 	return ((int)(result * sign));
// }

int	ft_atoi(const char *str, int *error)
{
	int				sign;
	unsigned long	result;
	int				i;

	sign = 1;
	result = 0;
	*error = 0;
	i = 0;
	if (!str[i])
		return (*error = 1, 0);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (*error = 1, 0);
		result = result * 10 + (str[i++] - '0');
		if (is_overflow(result, sign))
			return (*error = 1, 0);
	}
	return ((int)(result * sign));
}
