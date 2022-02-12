/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:14:58 by eozmert           #+#    #+#             */
/*   Updated: 2022/02/12 13:25:05 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->next = 0;
	new->content = content;
	return (new);
}

/*int main()
{
	t_list *list1;
	int i; 

	list1 = ft_lstnew(NULL);
	list1->content = "sene";
	printf("before : %s , adress : %p \n",list1->content, list1->next);
	list1->content = "enes";
	printf("after : %s , adress : %p \n",list1->content, list1->next);
}*/
