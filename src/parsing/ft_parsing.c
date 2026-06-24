/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 18:02:10 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/24 10:41:06 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free_split(char **split)
{
	char	*tmp;

	if (!split)
		return ;
	while (*split)
	{
		tmp = *split;
		split++;
		free(tmp);
	}
}

void	ft_stackinit_quoted(t_stack **a, int argc, char *argstr)
{
	char	**numbers;
	int		i;

	numbers = NULL;
	numbers = ft_split(argstr, ' ');
	if (!numbers)
		return ;
	i = -1;
	while (numbers[++i])
		ft_stackappend(numbers[i], a);
	ft_free_split(numbers);
}

void	ft_stackinit(t_stack **a, int argc, char **argv)
{
	int	i;

	a = malloc(sizeof(t_stack **));
	if (argc == 2)
		return (ft_stackinit_quoted(a, argc, argv[1]));
	i = 0;
	while (++i < argc)
		ft_stackappend(argv[i], a);
}

