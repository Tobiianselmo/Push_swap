/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:00:50 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/22 11:49:47 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_index(t_node *stack, int num)
{
	int		index;
	t_node	*current;

	index = 1;
	current = stack;
	while (current)
	{
		if (current->data < num)
			index++;
		current = current->next;
	}
	return (index);
}

void	ft_index(t_node **stack)
{
	t_node	*current;

	current = *stack;
	while (current)
	{
		current->index = ft_get_index(*stack, current->data);
		current = current->next;
	}
}
