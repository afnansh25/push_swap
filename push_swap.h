/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:42:51 by codespace         #+#    #+#             */
/*   Updated: 2025/05/04 14:12:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include	<unistd.h>
# include	<stdlib.h>
# include	<limits.h>
# include 	<stdio.h>

typedef struct s_node
{
	int	value;
	int	index;
	struct	s_node	*next;
} t_node;

int		ft_atoi(const char *str, int *error);
char	**ft_split(char const *s, char c);

//parsing
void   parse_args(int ac, char **av, t_node **a);
// static void   process_single_arg(char *arg, t_node **a);
// static void   process_token(char *token, t_node **a, char **split);
int   is_all_spaces(char *str);

//Check_errors
int 	is_valid_input(char *av);
int		has_duplicate(t_node *stack);
int		is_overflow(unsigned long result, int sign);
void	write_error(t_node **a);

//initialize
t_node	*create_node(int value);
int		add_node(t_node **stack, int value);
int		stack_sorted(t_node *s);
void sort_stack(t_node **a, t_node **b);
void	assign_indexes(t_node *stack);

//push
void    push(t_node **des, t_node **src);
void    pa(t_node **b, t_node **a);
void    pb(t_node **a, t_node **b);

//swap
void    swap(t_node **s);
void    sa(t_node **a);
void    sb(t_node **b);
void    ss(t_node **a, t_node **b);

//rotate
void    rotate(t_node **s);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);

//rrotate
void    rrotate(t_node **s);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

//sort
void    sort_two(t_node **a);
void    sort_three(t_node **a);
void   sort_four(t_node **a, t_node **b);
void    sort_five(t_node **a, t_node **b);
int find_pos(t_node *stack, int big_index);

//radix_sort
void	radix_sort(t_node **a, t_node **b);
int find_maxbit(int nbr);
int find_biggest(t_node *stack);

//sort_utils
t_node 	*findmax(t_node *s);
t_node 	*findmin(t_node *s);
t_node	*last_node(t_node *s);
int 	stack_len(t_node *s);
void	free_stack(t_node **stack);

//str_utils
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
void	print_stack(t_node *stack);

//split
size_t	count_words(char const *s, char c);
void	*free_split(char **split, size_t k);

#endif