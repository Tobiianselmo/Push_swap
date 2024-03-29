/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:22:47 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/26 11:26:17 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_repeat_nbr(int *array, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] == array[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_make_array(char **str)
{
	int		*res;
	int		i;
	int		len;
	int		j;
	t_node	**stack_a;

	i = 0;
	len = 0;
	j = 0;
	while (str[len])
		len++;
	res = (int *)malloc(sizeof(int) * len);
	if (!res)
		return ;
	while (str[i])
	{
		res[j] = ft_atol(str[i]);
		j++;
		i++;
	}
	if (ft_repeat_nbr(res, len) == 0)
		ft_free_and_error(res);
	stack_a = ft_make_stack(res, len);
	free(res);
	ft_sort(stack_a, len);
}
