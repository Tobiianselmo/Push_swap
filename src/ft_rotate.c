/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:37:27 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/22 11:50:33 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*first_node;
	t_node	*last_node;

	first_node = *stack;
	last_node = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = first_node;
	*stack = (*stack)->next;
	first_node->next = NULL;
}

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
