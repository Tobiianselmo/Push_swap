/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_nbrs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:50:10 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/22 17:45:04 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(t_node *stack)
{
	t_node	*aux;

	aux = stack;
	if (stack == NULL || stack->next == NULL)
		return (1);
	while ((aux)->next != NULL)
	{
		if (aux->data > aux->next->data)
			return (0);
		aux = aux->next;
	}
	return (1);
}

void	ft_sort_bigstack(t_node	**stack_a, int index_max)
{
	t_node	*stack_b;
	int		i;

	stack_b = NULL;
	i = 0;
	ft_index(stack_a);
	while (i < index_max / 2 && ft_list_size(*stack_a) > 3)
	{
		if ((*stack_a)->index <= index_max / 2)
		{
			pb(stack_a, &stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
	while (ft_list_size(*stack_a) > 3)
		pb(stack_a, &stack_b);
	ft_sort_three(stack_a);
	ft_bucle_sort(stack_a, &stack_b);
	free_stack(stack_a);
	free_stack(&stack_b);
}

void	ft_sort_three(t_node **stack_a)
{
	if ((*stack_a)->data < (*stack_a)->next->data
		&& (*stack_a)->next->data > (*stack_a)->next->next->data
		&& (*stack_a)->data < (*stack_a)->next->next->data)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if ((*stack_a)->data > (*stack_a)->next->data
		&& (*stack_a)->data < (*stack_a)->next->next->data)
		sa(stack_a);
	else if ((*stack_a)->data < (*stack_a)->next->data
		&& (*stack_a)->data > (*stack_a)->next->next->data)
		rra(stack_a);
	else if ((*stack_a)->data > (*stack_a)->next->data
		&& (*stack_a)->data > (*stack_a)->next->next->data
		&& (*stack_a)->next->data < (*stack_a)->next->next->data)
		ra(stack_a);
	else if ((*stack_a)->data > (*stack_a)->next->data
		&& (*stack_a)->data > (*stack_a)->next->next->data
		&& (*stack_a)->next->data > (*stack_a)->next->next->data)
	{
		sa(stack_a);
		rra(stack_a);
	}
}

void	ft_sort(t_node **stack_a, int len)
{
	if (ft_is_sorted(*stack_a) == 1)
		free_stack(stack_a);
	if (len == 2 && ft_is_sorted(*stack_a) == 0)
	{
		sa(stack_a);
		free_stack(stack_a);
	}
	else if (len == 3 && ft_is_sorted(*stack_a) == 0)
	{
		ft_sort_three(stack_a);
		free_stack(stack_a);
	}
	else if (len > 3 && ft_is_sorted(*stack_a) == 0)
		ft_sort_bigstack(stack_a, len);
}
