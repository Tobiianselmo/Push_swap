/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_target_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:54:44 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/27 11:56:07 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_smallest_pos(t_node **stack_a)
{
	t_node	*aux;
	t_node	*lowest;
	int		pos;

	aux = *stack_a;
	lowest = *stack_a;
	pos = 0;
	while (aux)
	{
		if (lowest->index > aux->index)
		{
			pos = aux->pos;
			lowest = aux;
		}
		aux = aux->next;
	}
	return (pos);
}

void	ft_target_pos(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;
	t_node	*current;
	t_node	*closest;

	tmp = *stack_b;
	while (tmp)
	{
		current = *stack_a;
		closest = NULL;
		while (current)
		{
			if (tmp->data < current->data
				&& (closest == NULL || closest->data > current->data))
				closest = current;
			current = current->next;
		}
		if (closest == NULL)
			tmp->target_pos = find_smallest_pos(stack_a);
		else
			tmp->target_pos = closest->pos;
		tmp = tmp->next;
	}
}
