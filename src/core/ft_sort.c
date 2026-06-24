/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 18:04:59 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/24 17:42:26 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*ft_sort_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	while (ft_stacksize(*a) > 3 && !ft_stacksorted(*a))
		ft_pb(a, &b, 1);
	return (b);
}

static int	ft_sort_big(t_stack **a)
{
	t_stack	*b;

	b = ft_stacknew((*a)->value);
	if (!b)
		return (ft_free_stack(a), ft_exit_error(1), 0);
	return (1);
}

void	ft_sort(t_stack **a, t_stack **b, t_pushswap *pushswap)
{
	t_stack	*b;

	b = NULL;
	
	if (ft_stacksize(*a) == 2)
		ft_sa(a, 1);
	else
	{
		b = ft_sort_b(a); //will push everything to a and print movements;
		// a = ft_sort_a(a, &b); //will push everything back to a
	}
}

t_stack	*ft_build_stack(int *numbers)
{
	t_stack	*stack;
	
	stack = malloc(sizeof)
	while (i < numbers_size)
		ft_stackappend(&stack, ft_stacknew(numbers[i]));
	ft_stack_indexes(&stack);
	return (stack);
}
//create the 