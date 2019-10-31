/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:40:27 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/27 10:25:48 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_character(char const *s, int index, char c)
{
	int		i;
	int		count;

	i = index;
	count = 0;
	while (s[i] != c && s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

static void	*ft_free(char **ch, int index)
{
	while (index >= 0)
	{
		index--;
		free(ch[index]);
	}
	free(ch);
	return (NULL);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ch;
	int		i;
	int		j;
	int		word_len;

	i = 0;
	j = 0;
	if (!s || !(ch = (char **)malloc(sizeof(char *) *
	(ft_count_word(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_len = ft_count_character(s, i, c);
			if (!(ch[j++] = ft_strsub(s, i, word_len)))
				return (ft_free(ch, j));
			i += word_len;
		}
		else
			i++;
	}
	ch[j] = NULL;
	return (ch);
}
