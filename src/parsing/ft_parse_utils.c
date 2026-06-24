/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:19:24 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/24 17:33:04 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_valid_selector(char *str)
{
	size_t	strlen;

	if (ft_strncmp(str, "--", 2) != 0)
		return (0);
	strlen = ft_strlen(str);
	return (ft_strncmp("--simple", str, strlen) || ft_strncmp("--medium", str, strlen)
		|| ft_strncmp("--complex", str, strlen) || ft_strncmp("--adaptative", str, strlen))
}


int	ft_duplicated(int *arr, int size)
{
	int	i;
	int	j;

	if (!arr)
		return (0);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i != j && arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
