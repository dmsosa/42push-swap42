/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 15:40:49 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/24 17:38:39 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_pushswap	*pushswap;

	if (argc < 2)
		return (1);
	pushswap = ft_build_pushswap(argc, argv);
	if (!pushswap)
		return (1);
	a = NULL;
	b = NULL;
	a = ft_parse_stack(pushswap->numbers);
	if (!ft_issorted(a))
		ft_sort(&a, &b, pushswap);
	return (ft_free_stack(&a), ft_free_stack(&b), free(pushswap), 0);
	return (0);
}

//OPERATIONS


void	ft_rotate(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = ft_stacklast(*stack);
	(*stack)->next = tmp;
	*stack = tmp->next;
	tmp->next = NULL;
}

t_stack	*ft_stacklast(t_stack *stack)
{
	if (!stack)
		return (NULL);	
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}




