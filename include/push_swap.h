/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 13:28:22 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/24 17:32:12 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

typedef struct t_pushswap
{
	char	*selector;
	char	*error;
	char	*joined_args;
	char	**splitted;
	char	**flags;
	char	**numbers;
	int		numbers_size;
	int		valid;
}	t_pushswap;

typedef struct s_stack
{
	long			value;
	long			index;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

//STACK UTILS
void	ft_stackinit(t_stack **stack, int argc, char **argv);
t_stack	*ft_stacknew(int value);
t_stack	*ft_stacklast(t_stack *stack);
void	ft_stackadd_back(t_stack **stack, t_stack *stack_new);
void	ft_stackappend(char *nbrstr, t_stack **a);
int		ft_stacksize(t_stack *stack);
void	ft_free_stack(t_stack **stack);
int		ft_stacksorted(t_stack *stack);

//SORTING
void	ft_sort(t_stack **stack_a);
void	ft_pb(t_stack **a, t_stack **b, int print);

//PARSING
char	**ft_parse_args(int argc, char **argv);

//UTILS
void	ft_exit_error(int key);

//PARSING
int		ft_isspace(char c);
int		ft_isspace_str(const char *str);
int		ft_valid_int(char *nbrstr);
int		ft_int_range(long n);
int		ft_duplicated(t_stack *stack, int value);

//OPERATIONS
void	ft_rb(t_stack **b, int print);
void	ft_pb(t_stack **a, t_stack **b, int print);
void	ft_sb(t_stack **b, int print);
void	ft_sa(t_stack **stack, int print);
void	ft_ra(t_stack **a, int print);


#endif