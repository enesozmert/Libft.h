/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:29:55 by eozmert           #+#    #+#             */
/*   Updated: 2022/02/07 14:21:16 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_cpy;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1) + 1;
	s1_cpy = (char *)malloc(sizeof(*s1_cpy) * len + 1);
	if (!s1_cpy)
		return (NULL);
	while (s1[i])
	{
		s1_cpy[i] = s1[i];
		i++;
	}
	s1_cpy[i] = '\0';
	return (s1_cpy);
}
