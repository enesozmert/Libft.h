/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:14:39 by eozmert           #+#    #+#             */
/*   Updated: 2022/02/12 17:44:30 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}

/*void delx(void *content)
{
	ft_memset(content,'\0', ft_strlen(content));	
}

int main()
{
	char content[] = "enes";
	t_list	*list1;
	int i;

	i  = 0;
	list1 = ft_lstnew(content);
	printf("before : %s \n",list1->content);
	ft_lstdelone(list1,delx);
	printf("after  : %s",list1->content);
}*/
