/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:51:49 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/28 15:22:36 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	else if (argc == 2)
		check_input_and_split(argv[1]);
	else if (argc > 2)
		check_input(argc, argv);
}
