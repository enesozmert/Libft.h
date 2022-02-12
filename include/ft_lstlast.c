/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:52:41 by eozmert           #+#    #+#             */
/*   Updated: 2022/02/12 15:18:32 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int main()
{
	t_list	*list1;
	t_list	*end_list1;
	int i;

	i = 0;
	list1 = NULL;
	while (i < 5)
	{
		ft_lstadd_front(&list1,ft_lstnew((int *)i));
		i++;
	}
	printf("content of first list1 : %d\n" ,(int)list1->content);
	end_list1 = ft_lstlast(list1);
	printf("content of last list1 : %d",(int)end_list1->content);
}
