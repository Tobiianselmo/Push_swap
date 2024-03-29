/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:01:56 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/29 14:36:10 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_is_sorted(t_node *stack)
{
	t_node	*aux;

	aux = stack;
	if (stack == NULL || stack->next == NULL)
		return (1);
	while ((aux)->next != NULL)
	{
		if (aux->data > aux->next->data)
			return (0);
		aux = aux->next;
	}
	return (1);
}

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

char	*ft_strjoin_ps(char *s1, char *s2)
{
	char	*s3;
	int		i;
	int		a;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	a = 0;
	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (!s3)
		return (NULL);
	while (s1[i])
		s3[a++] = s1[i++];
	i = 0;
	free(s1);
	if (a > 0)
		s3[a++] = ' ';
	while (s2[i])
		s3[a++] = s2[i++];
	s3[a] = '\0';
	return (s3);
}

int	ft_list_size(t_node *stack)
{
	t_node	*tmp;
	int		size;

	tmp = stack;
	size = 0;
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}
