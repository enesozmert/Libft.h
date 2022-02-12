/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:06:12 by eozmert           #+#    #+#             */
/*   Updated: 2022/02/12 17:43:41 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	
	t_list	*current;
	t_list	*next;

	if (!lst)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, (del));
		current = next;
	}
	*lst = NULL;
}
 	
void delx(void *content)
{
	ft_memset(content, '\0', ft_strlen(content));
}

int main()
{
	t_list	*list1;
	char content[] = "enes";
	int i;

	i = 0;
	list1  = NULL; 
	while (i < 5)
	{
		ft_lstadd_front(&list1, ft_lstnew((int *)i));
		i++;
	}
	printf("before : %s", list1->content);
	ft_lstclear(&list1, (delx));
	printf("after : %s", list1->content);

}
