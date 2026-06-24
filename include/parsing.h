/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 13:28:22 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/23 12:52:31 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "push_swap.h"

int	ft_isspace(char c);
int	ft_isspace_str(const char *str);
int	ft_valid_int(char *nbrstr);
int	ft_int_range(long n);
int	ft_duplicated(t_stack *stack, int value);

#endif