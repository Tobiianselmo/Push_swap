/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bucle_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:08:52 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/26 11:19:16 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lowest_to_top(t_node **stack_a)
{
	t_node	*aux;
	int		position;

	aux = *stack_a;
	position = 1;
	while (aux->index != 1)
	{
		aux = aux->next;
		position++;
	}
	if (position < ft_list_size(*stack_a) / 2)
		return (1);
	else
		return (0);
}

void	ft_bucle_sort(t_node **stack_a, t_node **stack_b)
{
	int		check;

	while (*stack_b)
	{
		ft_position(stack_a);
		ft_position(stack_b);
		ft_target_pos(stack_a, stack_b);
		ft_cost(stack_a, stack_b);
		ft_get_low_cost(stack_a, stack_b);
	}
	check = ft_lowest_to_top(stack_a);
	while ((*stack_a)->index != 1)
	{
		if (check == 1)
			ra(stack_a);
		else
			rra(stack_a);
	}
}

void	ft_make_movs(t_node **a, t_node **b, t_node *low_cost_node)
{
	int	cost_a;
	int	cost_b;

	cost_a = low_cost_node->cost_a;
	cost_b = low_cost_node->cost_b;
	if (cost_a > 0 && cost_b > 0)
		mov_rr(a, b, &cost_a, &cost_b);
	else if (cost_a < 0 && cost_b < 0)
		mov_rrr(a, b, &cost_a, &cost_b);
	while (cost_a != 0 || cost_b != 0)
	{
		mov_ra(a, &cost_a);
		mov_rb(b, &cost_b);
		mov_rra(a, &cost_a);
		mov_rrb(b, &cost_b);
	}
	pa(a, b);
}

void	mov_rr(t_node **stack_a, t_node **stack_b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		rr(stack_a, stack_b);
		(*cost_a)--;
		(*cost_b)--;
	}
}

void	mov_rrr(t_node **stack_a, t_node **stack_b, int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		rrr(stack_a, stack_b);
		(*cost_a)++;
		(*cost_b)++;
	}
}
