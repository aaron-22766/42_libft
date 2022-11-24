/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:57:18 by arabenst          #+#    #+#             */
/*   Updated: 2022/10/31 15:42:49 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		size;

	if (!lst)
		return (0);
	temp = lst;
	size = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
