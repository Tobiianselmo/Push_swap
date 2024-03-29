/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:37:42 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/28 12:08:20 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rev_rot(t_node **stack)
{
	t_node	*last_node;
	t_node	*second_last_node;
	t_node	*new_head;

	last_node = *stack;
	second_last_node = NULL;
	new_head = NULL;
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	while (last_node->next != NULL)
	{
		second_last_node = last_node;
		last_node = last_node->next;
	}
	second_last_node->next = NULL;
	last_node->next = *stack;
	new_head = last_node;
	*stack = new_head;
}

void	rra(t_node **stack_a)
{
	rev_rot(stack_a);
}

void	rrb(t_node **stack_b)
{
	rev_rot(stack_b);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rev_rot(stack_a);
	rev_rot(stack_b);
}
