/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:47:24 by arabenst          #+#    #+#             */
/*   Updated: 2022/11/01 08:46:59 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	size = sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1);
	joined = malloc(size);
	if (!joined)
		return (NULL);
	ft_strlcpy(joined, s1, size);
	ft_strlcpy(joined + ft_strlen(s1), s2, size);
	return (joined);
}
