/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:00:11 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/27 16:41:55 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_conversion(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 1;
	str = ft_checker(argc, argv);
	if (!str)
		print_error();
	ft_conversion_one(str);
	free_str(str);
}

void	ft_conversion_one(char *argv)
{
	char	**matrix;

	matrix = NULL;
	if (argv[0] == '\0')
		print_error();
	else if (ft_nbr_spaces(argv) == 0)
		print_error();
	if (ft_all_spaces(argv) == 0)
		print_error();
	else
	{
		matrix = ft_split(argv, ' ');
		if (!matrix)
			return ;
		ft_make_array(matrix);
	}
	free_matrix(matrix);
}
