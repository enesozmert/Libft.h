/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:33:12 by eozmert           #+#    #+#             */
/*   Updated: 2022/02/12 13:25:24 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <stdio.h>

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    new->next = *lst;
    *lst = new;
}

int main()
{
	t_list *list1;
	int i;

	i = 0;
	list1 = NULL;
	while (i < 10)
	{
		ft_lstadd_front(&list1, ft_lstnew(&i));
		printf("\n-----------------------\n");
		printf("Iteration #%d\n", i);
        printf("The node is a pointer, containing the address : %p\n", list1);
        printf("The structure content is %d\n", *(int *)list1->content);
        if (i == 0)
            printf("The next address pointed by the struct : %p\n", list1->next);
        else
            printf("The next address pointed by the struct : %p\n", list1->next);
        printf("--------------------------\n\n\n");
		i++;
	}
}
