/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_movs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:16:03 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/22 15:57:43 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mov_ra(t_node **stack_a, int *cost_a)
{
	while (*cost_a > 0)
	{
		ra(stack_a);
		(*cost_a)--;
	}
}

void	mov_rb(t_node **stack_b, int *cost_b)
{
	while (*cost_b > 0)
	{
		rb(stack_b);
		(*cost_b)--;
	}
}

void	mov_rra(t_node **stack_a, int *cost_a)
{
	while (*cost_a < 0)
	{
		rra(stack_a);
		(*cost_a)++;
	}
}

void	mov_rrb(t_node **stack_b, int *cost_b)
{
	while (*cost_b < 0)
	{
		rrb(stack_b);
		(*cost_b)++;
	}
}
