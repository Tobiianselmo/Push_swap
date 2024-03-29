/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:16:09 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/29 14:14:48 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	input_movements(char *str, t_node **list_a, t_node **list_b)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		do_swap(list_a, list_b, "SA");
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		do_swap(list_a, list_b, "SB");
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		do_swap(list_a, list_b, "SS");
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		do_rotate(list_a, list_b, "RA");
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		do_rotate(list_a, list_b, "RB");
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		do_rotate(list_a, list_b, "RR");
	else if (ft_strncmp(str, "rra\n", 3) == 0)
		do_reverse_rotate(list_a, list_b, "RRA");
	else if (ft_strncmp(str, "rrb\n", 3) == 0)
		do_reverse_rotate(list_a, list_b, "RRB");
	else if (ft_strncmp(str, "rrr\n", 3) == 0)
		do_reverse_rotate(list_a, list_b, "RRR");
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		do_push(list_a, list_b, "PA");
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		do_push(list_a, list_b, "PB");
	else
		ft_error(list_a, list_b);
}

void	check_input_and_movements(t_node **list_a)
{
	t_node	*list_b;
	char	*line;

	list_b = NULL;
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		input_movements(line, list_a, &list_b);
		free(line);
	}
	if (ft_is_sorted(*list_a) == 1 && ft_list_size(list_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_stack(list_a);
}
