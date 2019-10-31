/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:17:49 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/13 14:12:05 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ch;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 != NULL && s2 != NULL)
	{
		if (!(ch = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		while (s1[i])
			ch[j++] = s1[i++];
		i = 0;
		while (s2[i])
			ch[j++] = s2[i++];
		return (ch);
	}
	return (NULL);
}
