/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 19:11:14 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/23 17:40:50 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stacksorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next != NULL)
	{
		if (stack->value > (stack->next)->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
