/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:37:42 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/22 11:50:44 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	ft_printf("rra\n");
}

void	rrb(t_node **stack_b)
{
	rev_rot(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rev_rot(stack_a);
	rev_rot(stack_b);
	ft_printf("rrr\n");
}
