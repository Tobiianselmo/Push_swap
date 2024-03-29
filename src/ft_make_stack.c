/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:59:27 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/21 14:06:09 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	**ft_make_stack(int *array, int size)
{
	int		i;
	t_node	**stack_a;
	t_node	*current_node;

	i = 0;
	stack_a = (t_node **)malloc(sizeof(t_node *));
	if (!stack_a)
		return (NULL);
	*stack_a = (t_node *)malloc(sizeof(t_node));
	if (!*stack_a)
		return (NULL);
	current_node = *stack_a;
	current_node->data = array[i++];
	current_node->next = NULL;
	while (i < size)
	{
		current_node->next = (t_node *)malloc(sizeof(t_node));
		if (!current_node->next)
			return (NULL);
		current_node = current_node->next;
		current_node->data = array[i++];
		current_node->next = NULL;
	}
	return (stack_a);
}
