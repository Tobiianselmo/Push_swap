/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:52:20 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/26 11:39:14 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_all_spaces(char	*str)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			check++;
		}
		i++;
	}
	if (check == i)
		return (0);
	else
		return (1);
}

int	ft_sign_after_nbr(char *str, int i)
{
	if ((str[i] == '-' || str[i] == '+') && i > 0)
	{
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
			return (0);
	}
	return (1);
}

int	ft_check_sign(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] < '0' || str[i + 1] > '9')
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_nbr_spaces(char *str)
{
	int	i;
	int	check;

	i = -1;
	check = 0;
	while (str[++i])
	{
		if (ft_sign_after_nbr(str, i) == 0)
			print_error();
		else
			check = 1;
	}
	i = 0;
	if (ft_check_sign(str) == 0)
		return (0);
	while (str[i] && check == 1)
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' '
			&& str[i] != '+' && str[i] != '-')
			return (0);
		i++;
	}
	if (i == 0)
		return (0);
	return (1);
}

char	*ft_checker(int argc, char **argv)
{
	int		i;
	char	*str;
	char	*result;

	i = 1;
	str = ft_strdup("");
	while (i < argc)
	{
		if (ft_nbr_spaces(argv[i]) == 0)
			print_error();
		if (ft_all_spaces(argv[i]) == 0)
			print_error();
		str = ft_strjoin_ps(str, argv[i]);
		i++;
	}
	result = ft_strdup(str);
	str = free_str(str);
	return (result);
}
