/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 13:28:22 by durisosa          #+#    #+#             */
/*   Updated: 2026/06/23 12:52:19 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "push_swap.h"

void	ft_rb(t_stack **b, int print);
void	ft_pb(t_stack **a, t_stack **b, int print);
void	ft_sb(t_stack **b, int print);
void	ft_sa(t_stack **stack, int print);
void	ft_ra(t_stack **a, int print);

#endif