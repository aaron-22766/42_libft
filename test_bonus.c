/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:02:57 by arabenst          #+#    #+#             */
/*   Updated: 2022/10/31 15:44:01 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_printlist(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp != NULL)
	{
		printf("%s - ", temp->content);
		temp = temp->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*my_list;
	int		a;
	int		b;
	int		c;
	int		d;
	int		e;

	a = '0' + 1;
	b = '0' + 2;
	c = '0';
	d = '0' + 3;
	e = '0' + 4;
	my_list = ft_lstnew(&a);
	my_list->next = ft_lstnew(&b);
	ft_lstadd_front(&my_list, ft_lstnew(&c));
	ft_lstadd_back(&my_list, ft_lstnew(&d));
	ft_lstadd_back(&my_list, ft_lstnew(&e));

	printf("\n%i nodes\n", ft_lstsize(my_list));
	ft_printlist(my_list);
	printf("last node content: %s\n\n", ft_lstlast(my_list)->content);
	return (0);
}
