/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:32:30 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/25 16:09:39 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	size_t	final_size;

	final_size = nmemb * size;
	str = malloc(final_size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, final_size);
	return (str);
}

/*
// cc -Wall -Werror -Wextra ft_calloc.c ft_bzero.c

int	compare(char *str1, char *str2, size_t size)
{
	size_t	i = 0;

	if (str1 == NULL && str2 == NULL)
		return (1);
	while (i < size)
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

void	test(size_t nmemb, size_t size, int *test)
{
	char *str = ft_calloc(nmemb, size);
	char *expected = calloc(nmemb, size);

	printf("#%d - (%zu, %zu):", *test, nmemb, size);
	if (compare(str, expected, size))
		printf(" OK\n");
	else
		printf("\n- KO\nGot \"%s\" instead of \"%s\"\n", str, expected);
	if (str != NULL)
		free(str);
	if (expected != NULL)
		free(expected);
	(*test)++;
}

int	main(void)
{
	int	test_num = 1;

	test(42, 42, &test_num);
	test(5, 5, &test_num);
	test(0, 0, &test_num);
	test(__UINT32_MAX__, 1, &test_num);
	return 0;
}
*/