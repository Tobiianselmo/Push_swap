/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_ps_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:06:53 by tanselmo          #+#    #+#             */
/*   Updated: 2024/03/27 17:41:05 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*ft_strjoin_ps(char *s1, char *s2)
{
	char	*s3;
	int		i;
	int		a;
	int		s1_len;
	int		s2_len;

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
