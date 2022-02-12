/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:37:02 by eozmert           #+#    #+#             */
/*   Updated: 2022/02/12 13:47:14 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

int main()
{
	t_list *list1;
	int i;

	list1 = NULL;
	i = 0;

	while (i < 10)
	{
		ft_lstadd_front(&list1, ft_lstnew(&i));
		i++;	
	}
	printf("size of list : %d \n",ft_lstsize(list1));
}
