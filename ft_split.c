/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:35:17 by daniema3          #+#    #+#             */
/*   Updated: 2024/09/16 21:37:09 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_word_nbr(const char *s, char c)
{
	int	i;
	int	w_nbr;

	i = 0;
	w_nbr = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			w_nbr++;
		i++;
	}
	return (w_nbr);
}

static int	get_word_len(const char *s, char c, int i)
{
	int	w_len;

	w_len = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			w_len++;
		else
			break ;
		i++;
	}
	return (w_len);
}

static void	*free_mem(char **split, int w_nbr)
{
	int	i;

	i = 0;
	while (i < w_nbr)
		free(split[i++]);
	free(split[i]);
	return (NULL);
}

static char	**fill_split(const char *s, char c, int w_nbr, char **split)
{
	int	i;
	int	j;
	int	k;
	int	w_len;

	i = 0;
	j = 0;
	while (i < w_nbr)
	{
		while (s[j] == c)
			j++;
		w_len = get_word_len(s, c, j);
		split[i] = (char *) malloc((w_len + 1) * sizeof(char));
		if (split[i] == NULL)
			return (free_mem(split, w_nbr));
		k = 0;
		while (k < w_len)
			split[i][k++] = s[j++];
		split[i][k] = '\0';
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(const char *s, char c)
{
	int		w_nbr;
	char	**split;

	if (s == NULL)
		return (NULL);
	w_nbr = get_word_nbr(s, c);
	split = (char **) malloc(sizeof (char *) * (w_nbr + 1));
	if (split == NULL)
		return (NULL);
	return (fill_split(s, c, w_nbr, split));
}
