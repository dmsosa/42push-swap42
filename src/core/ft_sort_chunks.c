/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:39:01 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/24 17:39:05 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_three(t_stack	**stack)
{
	t_stack	*max;

	max = ft_max(*stack);
	if (max->index == ft_stacksize(*stack))
		ft_swap(*stack);
	else if (max->index == 0)
	{
		ft_rotate(*stack);
		if (!ft_issorted(*stack))
			ft_swap(*stack);
	}
	else
	{
		ft_reverse_rotate(*stack);
		if (!ft_issorted(*stack))
			ft_swap(*stack);
	}
}

