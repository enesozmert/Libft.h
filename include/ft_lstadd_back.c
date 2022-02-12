/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:28:31 by eozmert           #+#    #+#             */
/*   Updated: 2022/02/12 15:17:15 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *list_end;

	if (!*lst)
		*lst = new;
	else
	{
		list_end = ft_lstlast(*lst);
		list_end->next = new;
	}
}

int main()
{
	t_list *list1;
	t_list *list1_end;
	int i;

	i = 0;
	list1 = NULL;
	while (i < 5)
	{
		ft_lstadd_back(&list1, ft_lstnew((int *)i));
		i++;
	}
	printf("content of first node =	%d\n", (int)list1->content);
	list1_end = ft_lstlast(list1);
	printf("content of last node =	%d\n", (int)list1_end->content);
}
