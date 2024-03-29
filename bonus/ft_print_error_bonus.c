/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:20:44 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/28 12:47:36 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_free_and_error(int *res)
{
	free(res);
	print_error();
}
