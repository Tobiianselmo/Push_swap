/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:29:03 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/22 16:00:28 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cost(t_node **stack_a, t_node **stack_b)
{
	t_node	*aux_a;
	t_node	*aux_b;
	int		size_a;
	int		size_b;

	aux_a = *stack_a;
	aux_b = *stack_b;
	size_a = ft_list_size(*stack_a);
	size_b = ft_list_size(*stack_b);
	while (aux_b)
	{
		if (aux_b->pos <= size_b / 2)
			aux_b->cost_b = aux_b->pos;
		else
			aux_b->cost_b = (size_b - aux_b->pos) * -1;
		if (aux_b->target_pos <= size_a / 2)
			aux_b->cost_a = aux_b->target_pos;
		else
			aux_b->cost_a = (size_a - aux_b->target_pos) * -1;
		aux_b = aux_b->next;
	}
}

void	ft_get_low_cost(t_node **stack_a, t_node **stack_b)
{
	t_node	*aux;
	t_node	*low_cost_node;
	int		low_cost;
	int		cost;

	aux = *stack_b;
	low_cost = -1;
	cost = 0;
	while (aux)
	{
		cost = ft_absolute(aux->cost_a, aux->cost_b);
		if (low_cost == -1 || cost < low_cost)
		{
			low_cost = cost;
			low_cost_node = aux;
		}
		aux = aux->next;
	}
	ft_make_movs(stack_a, stack_b, low_cost_node);
}

int	ft_absolute(int a, int b)
{
	int	len;

	len = 0;
	if (a == 0 && b == 0)
		return (0);
	if (a < 0)
	{
		len = a * -1;
	}
	else
		len = a;
	if (b < 0)
	{
		len = len + (b * -1);
	}
	else
		len = len + b;
	return (len);
}

/* int	ft_absolute_b(int a, int b)
{
	int len;

	len = 0;
	if (a < 0 && b < 0)
	{
		len = a;
		if (b < a)
			len = b;
	}
	else if (a > 0 && b > 0)
	{
		len = a;
		if (b > a)
			len = b;
	}
	else
		len = ft_absolute(a, b);
	return (len);
}
 */