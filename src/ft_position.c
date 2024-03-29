/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_position.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:22:28 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/15 13:35:32 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_position(t_node **stack)
{
	t_node	*current;
	int		pos_num;

	current = *stack;
	pos_num = 0;
	while (current)
	{
		current->pos = pos_num;
		current = current->next;
		pos_num++;
	}
}
