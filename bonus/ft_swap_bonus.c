/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:37:15 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/28 12:08:03 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap(t_node **stack)
{
	t_node	*aux;
	t_node	*tmp;

	if (*stack && (*stack)->next)
	{
		tmp = (*stack)->next->next;
		aux = *stack;
		*stack = (*stack)->next;
		aux->next = tmp;
		(*stack)->next = aux;
	}
}

void	sa(t_node **stack_a)
{
	swap(stack_a);
}

void	sb(t_node **stack_b)
{
	swap(stack_b);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
