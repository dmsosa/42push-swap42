/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 17:32:43 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/26 17:52:45 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !*stack || (*stack)->next == NULL)
		return ;
	tmp = *stack;
	(*stack) = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	ft_sa(t_stack **a, t_pushswap *pushswap)
{
	if (!a || !*a || (*a)->next == NULL)
		return ;
	pushswap->sa_count++;
	ft_swap(a);
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack **b, t_pushswap *pushswap)
{
	if (!b || !*b || (*b)->next == NULL)
		return ;
	pushswap->sa_count++;
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack **a, t_stack **b, t_pushswap *pushswap)
{
	if ((!a || !*a || (*a)->next == NULL)
		|| (!b || !*b || (*b)->next == NULL))
		return ;
	pushswap->ss_count++;
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}
