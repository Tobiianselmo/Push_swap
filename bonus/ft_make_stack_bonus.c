/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_stack_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:59:27 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/27 17:40:52 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_node	**make_stack(int *array, int size)
{
	int		i;
	t_node	**stack;
	t_node	*current_node;

	i = 0;
	stack = (t_node **)malloc(sizeof(t_node *));
	if (!stack)
		return (NULL);
	*stack = (t_node *)malloc(sizeof(t_node));
	if (!*stack)
		return (NULL);
	current_node = *stack;
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
	return (stack);
}
