/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:44:21 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/29 14:07:23 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	push(t_node **src, t_node **dst)
{
	t_node	*tmp;

	if (*src == NULL || src == NULL)
		return ;
	if (dst != NULL && src != NULL)
	{
		tmp = (*src)->next;
		(*src)->next = *dst;
		*dst = *src;
		*src = tmp;
	}
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_b, stack_a);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
}
