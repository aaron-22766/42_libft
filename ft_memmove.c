/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:39:54 by arabenst          #+#    #+#             */
/*   Updated: 2022/11/01 10:18:49 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (src < dst && src + len > dst)
	{
		while (i < len)
		{
			*(char *)(dst + len - i - 1) = *(char *)(src + len - i - 1);
			i++;
		}
		return (dst);
	}
	while (i < len)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
