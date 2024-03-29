/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_movements_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:33:14 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/27 17:31:55 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	do_swap(t_node **list_a, t_node **list_b, char *str)
{
	if (ft_strncmp(str, "SA", 2) == 0)
		sa(list_a);
	else if (ft_strncmp(str, "SB", 2) == 0)
		sb(list_b);
	else if (ft_strncmp(str, "SS", 2) == 0)
		ss(list_a, list_b);
}

void	do_rotate(t_node **list_a, t_node **list_b, char *str)
{
	if (ft_strncmp(str, "RA", 2) == 0)
		ra(list_a);
	else if (ft_strncmp(str, "RB", 2) == 0)
		rb(list_b);
	else if (ft_strncmp(str, "RR", 2) == 0)
		rr(list_a, list_b);
}

void	do_reverse_rotate(t_node **list_a, t_node **list_b, char *str)
{
	if (ft_strncmp(str, "RRA", 3) == 0)
		rra(list_a);
	else if (ft_strncmp(str, "RRB", 3) == 0)
		rrb(list_b);
	else if (ft_strncmp(str, "RRR", 3) == 0)
		rrr(list_a, list_b);
}

void	do_push(t_node **list_a, t_node **list_b, char *str)
{
	if (ft_strncmp(str, "PA", 2) == 0)
		pa(list_a, list_b);
	else if (ft_strncmp(str, "PB", 2) == 0)
		pb(list_a, list_b);
}
