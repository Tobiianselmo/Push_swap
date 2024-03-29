/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:14:02 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/26 11:21:06 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_node **stack_a, t_node **stack_b)
{
	if (stack_a || *stack_a)
		free_stack(stack_a);
	if (stack_b || *stack_b)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit(1);
}

void	free_stack(t_node **stack)
{
	t_node	*aux;

	if (!(*stack) || !stack)
		return ;
	while (*stack)
	{
		aux = (*stack)->next;
		free(*stack);
		*stack = aux;
	}
	*stack = NULL;
	free(stack);
}

void	free_array(int *array)
{
	free(array);
	array = NULL;
}

char	*free_str(char *str)
{
	free(str);
	str = NULL;
	return (str);
}

void	free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
