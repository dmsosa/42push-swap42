/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 18:07:59 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/23 12:52:49 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **stack, int print)
{
	t_stack	*head;

	if (!stack || !*stack || (!(*stack)->next))
		return ;
	head = (*stack);
	(*stack)->next = head;
	(*stack) = (*stack)->next;
	if (print)
		write(1, "sa\n", 3);
}

void	ft_ra(t_stack **a, int print)
{
	t_stack	*tmp;

	if (!a || !*a || !((*a)->next))
		return ;
	tmp = *a;
	*a = ft_stacklast(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	if (print)
		write(1, "ra\n", 3);
}
