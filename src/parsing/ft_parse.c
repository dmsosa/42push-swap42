/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:29:35 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/24 17:32:45 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

t_pushswap	*ft_build_pushswap(int argc, char **argv)
{
	t_pushswap	*pushswap;
	int			i;

	pushswap = ft_pushswap_init();
	if (!pushswap)
		return (NULL);
	i = 1;
	while (i < argc)
		pushswap->joined_args = ft_strjoin_sep(pushswap->joined_args, argv[i]);
	if (!pushswap->joined_args)
		return (free(pushswap), NULL);
	pushswap->splitted = ft_split(pushswap->joined_args, ' ');
	pushswap = ft_split_numbers(pushswap->splitted, &pushswap);
	pushswap = ft_find_selector(pushswap->splitted, &pushswap);
	if (!pushswap->valid)
		return (free(pushswap), NULL);
	return (pushswap);
}

static t_pushswap	*ft_find_selector(char **strs, t_pushswap **pushswap)
{
	int	found;
	int	i;

	found = 0;
	i = 0;
	while (strs[i])
	{
		if (ft_valid_selector(strs[i]))
		{
			if (found)
				return ((*pushswap)->valid = 0,
					(*pushswap)->error = "More than 1 valid selector",
					*pushswap);
			else
			{
				(*pushswap)->selector = strs[i];
				found = 1;
			}
		}
		i++;
	}
	if (!found)
		(*pushswap)->selector = "--adaptative";
}

static t_pushswap	*ft_split_numbers(char	**strs, t_pushswap **pushswap)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!pushswap || !(*pushswap))
		return (NULL);
	while ((*pushswap)->splitted[i])
	{
		if (ft_valid_int((*pushswap)->splitted[i]))
			(*pushswap)->numbers[count] = ft_atoi((*pushswap)->splitted[i]);
		else if (!ft_valid_selector((*pushswap)->splitted[i]))
			return ((*pushswap)->valid = 0, *pushswap);
		count++;
		i++;
	}
	if (ft_duplicated((*pushswap)->numbers, count))
		return ((*pushswap)->valid = 0, NULL);
	(*pushswap)->numbers_size = count;
	return (*pushswap);
}

//FT_PARSE_UTILS
static t_pushswap	*ft_pushswap_init(void)
{
	t_pushswap	*init;

	init = malloc(sizeof(t_pushswap));
	if (!init)
		return (NULL);
	init->valid = 1;
	return (init);
}

char	*ft_strjoin_sep(char *prev, char *new)
{
	char	*joined;
	size_t	prev_len;
	size_t	new_len;
	
	if (!new)
		return (prev);
	if (!prev)
		prev_len = 0;
	else
		prev_len = ft_strlen(prev);
	joined = malloc((prev_len + new_len + 2) * sizeof(char));
	if (!joined) //if not joined, I should free the prev?
		return (free(prev), NULL);
	joined[prev_len] = ' ';
	ft_strlcpy(joined, prev, prev_len);
	ft_strlcpy(joined + prev_len + 1, new, new_len);
	return (joined);	
}
