/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:57:18 by arabenst          #+#    #+#             */
/*   Updated: 2022/10/28 16:02:45 by arabenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	my_toupper(unsigned int i, char c)
{
	if (i >= 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

void	my_toupper2(unsigned int i, char *c)
{
	if (i >= 0 && *c >= 'a' && *c <= 'z')
		printf("%c", *c);
}

int	main(void)
{
	char		str1[50] = "Nothing is evil in the beginning.";
	char		str2[50] = "Nothing is evil in the beginning.";
	char		str3[50] = "Nothing is evil in the beginning.";
	char		str4[50] = "Nothing is evil in the beginning.";
	char		str5[50] = "Nothing is evil in the beginning.";
	char		str6[50] = "Nothing is evil in the beginning.";
	const char	str7[50] = "Nothing is evil in the beginning.";
	char		str8[100] = "amamamaamammmamam_Nothing is evil in the beginning._mmmmaamamammmmammam";
	char		str9[50] = "Nothing is evil in the beginning.";
	char		str10[50] = "__Nothing__is_evil_in______the___beginning._";
	int			dstsize1 = 0;
	char		src[20] = "1111111111";
	char		dst1[11] = "0000000000";
	char		dst2[11] = "0000000000";
	int			dstsize2 = 1;
	char		dst3[30] = "0000000000";
	char		dst4[30] = "0000000000";
	int			i;
	int			*ptr1;
	int			*ptr2;
	char		**spl;

	printf("\nTEST RESULTS:\n\n");

	printf("isalpha:\n%i || %i\n\n", ft_isalpha('3'), isalpha('3'));

	printf("isdigit:\n%i || %i\n\n", ft_isdigit('5'), isdigit('5'));
	
	printf("isalnum:\n%i || %i\n\n", ft_isalnum('Z'), isalnum('Z'));
	
	printf("isascii:\n%i || %i\n\n", ft_isascii('o'), isascii('o'));

	printf("isprint:\n%i || %i\n\n", ft_isprint('f'), isprint('f'));

	printf("strlen:\n%zu || %lu\n\n", ft_strlen("test"), strlen("test"));

	memset(str1, '.', 40 * sizeof(char));
	ft_memset(str2, '.', 40 * sizeof(char));
	printf("memset:\n%s || %s\n\n", str1, str2);

	bzero(str1, 15 * sizeof(char));
	ft_bzero(str2, 15 * sizeof(char));
	printf("bzero:\n%c || %c\n\n", str1[15], str2[15]);

	memcpy(str3 + 2, str3, 5);
	ft_memcpy(str4 + 2, str4, 5);
	printf("memcpy:\n%s || %s\n\n", str3, str4);

	memmove(str5 + 6, str5, 15);
	ft_memmove(str6 + 6, str6, 15);
	printf("memmove:\n%s || %s\n\n", str5, str6);

	printf("strlcpy:\n%lu || %zu\n%s || %s\n\n", strlcpy(dst1, src, dstsize1), ft_strlcpy(dst2, src, dstsize1), dst1, dst2);
	
	printf("strlcat:\n%lu || %zu\n%s || %s\n\n", strlcat(dst3, src, dstsize2), ft_strlcat(dst4, src, dstsize2), dst3, dst4);

	printf("toupper:\n%c || %c\n\n", toupper('f'), ft_toupper('f'));
	
	printf("tolower:\n%c || %c\n\n", tolower('A'), ft_tolower('A'));

	printf("strchr:\n%s || %s\n\n", strchr("qwertyuiowertyuiop", 'p'), ft_strchr("qwertyuiowertyuiop", 'p'));
	
	printf("strchr:\n%s || %s\n\n", strrchr("qwertyuiowertyuiop", 'p'), ft_strrchr("qwertyuiowertyuiop", 'p'));

	printf("strncmp:\n%i || %i\n\n", strncmp("TESTS", "TEST", 40), ft_strncmp("TESTS", "TEST", 40));
	
	printf("memchr:\n%s || %s\n\n", memchr("qwertyuiowertyuiop", 'p', 10), ft_memchr("qwertyuiowertyuiop", 'p', 10));

	printf("memcmp:\n%i || %i\n\n", memcmp("TEST", "TEST", 40), ft_memcmp("TEST", "TEST", 40));

	printf("strnstr:\n%s || %s\n\n", strnstr("125673456789", "5678", 13), ft_strnstr("125673456789", "5678", 13));

	printf("atoi:\n%i || %i\n\n", atoi("\n \t\r\n-01032"), ft_atoi("\n \t\r\n-01032"));

	i = 0;
	ptr1 = (int *)calloc(3, sizeof(int));
	ptr2 = (int *)ft_calloc(3, sizeof(int));
	while (i < 3)
	{
		ptr1[i] = str7[i];
		ptr2[i] = str7[i];
		i++;
	}
	i = 0;
	printf("calloc:\n");
	while (i < 3)
	{
		printf("%c", ptr1[i]);
		i++;
	}
	i = 0;
	printf(" || ");
	while (i < 3)
	{
		printf("%c", ptr2[i]);
		i++;
	}
	printf("\n\n");
	free(ptr1);
	free(ptr2);

	printf("strdup:\n%s || %s\n\n", strdup(str7), ft_strdup(str7));
	
	printf("substr:\n%s\n%s\n\n", str7, ft_substr(str7, 8, 2));
	
	printf("strjoin:\n%s%s\n%s\n\n", str7, src, ft_strjoin(str7, src));
	
	printf("strtrim:\n%s\n%s\n\n", str8, ft_strtrim(str8, "ma"));

	printf("split:\n%s\n", str10);
	i = 0;
	spl = ft_split(str10, '_');
	while (spl[i])
	{
		printf("%s\n", spl[i]);
		i++;
	}
	printf("\n");
	
	printf("itoa:\n%s\n\n", ft_itoa(-2147483648));
	
	printf("strmapi:\n%s\n\n", ft_strmapi(str7, my_toupper));
	
	printf("striteri:\n");
	ft_striteri(str9, my_toupper2);
	printf("\n\n");

	printf("putchar_fd:\n");
	ft_putchar_fd('N', 1);
	printf("\n\n");
	
	printf("putstr_fd:\n");
	ft_putstr_fd(str9, 1);
	printf("!!\n\n");
	
	printf("ft_putendl_fd:\n");
	ft_putendl_fd(str9, 1);
	printf("!!\n\n");
	
	printf("ft_putnbr_fd:\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n\n");
	
	return (0);
}
