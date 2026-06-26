/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 17:32:43 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/26 18:07:52 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//shift all elements down by one position
//last becomes the first
void	ft_reverse(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	temp = *stack;
	while (temp->next->next != NULL)
	{
		temp = temp->next;
	}
	last = temp->next;
	temp->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	ft_rra(t_stack **a, t_pushswap *pushswap)
{
	if (!a || !*a || (*a)->next == NULL)
		return ;
	pushswap->rra_count++;
	ft_reverse(a);
	write(1, "rra\n", 3);
}

void	ft_rrb(t_stack **b, t_pushswap *pushswap)
{
	if (!b || !*b || (*b)->next == NULL)
		return ;
	pushswap->rrb_count++;
	ft_reverse(b);
	write(1, "rrb\n", 3);
}

void	ft_rrr(t_stack **a, t_stack **b, t_pushswap *pushswap)
{
	if ((!a || !*a || (*a)->next == NULL)
		|| (!b || !*b || (*b)->next == NULL))
		return ;
	pushswap->rrr_count++;
	ft_reverse(a);
	ft_reverse(b);
	write(1, "rrr\n", 3);
}
