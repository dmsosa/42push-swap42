/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 19:15:54 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/24 17:21:35 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit_error(int key)
{
	if (key == 1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	else
		exit(0);
}

void	ft_printstack(t_stack *stack)
{
	int	count;

	count = 0;
	ft_printf("-------- begin of stack --------\n");
	while (stack->next != NULL)
	{
		ft_printf("[%d] stack node value is: '%d'\n", count, stack->value);
		stack = stack->next;
	}
	ft_printf("\n-------- end of stack --------");
}

void	ft_exit_error_str(int key, char *str)
{
	char	*sdup;
	size_t	strlen;

	if (!str)
		sdup = ft_strdup("Error\n");
	else
		sdup = ft_strdup(str);
	strlen = ft_strlen(sdup);
	if (key == 1)
	{
		write(2, sdup, strlen);
		exit(1);
	}
	else
		exit(0);
}