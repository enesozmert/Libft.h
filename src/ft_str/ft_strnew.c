/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:01:49 by eozmert           #+#    #+#             */
/*   Updated: 2022/02/10 11:49:22 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*memory;

	memory = 0;
	memory = (char *)malloc(sizeof(char) * ((int)size + 1));
	if (memory == 0)
		return (NULL);
	ft_memset(memory, '\0', size + 1);
	return (memory);
}
