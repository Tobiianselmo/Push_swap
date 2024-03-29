/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_array_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:22:47 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/27 17:36:13 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	make_array(char **str)
{
	int		*res;
	int		i;
	int		len;
	int		j;
	t_node	**stack;

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
	stack = make_stack(res, len);
	free(res);
	check_input_and_movements(stack);
}
