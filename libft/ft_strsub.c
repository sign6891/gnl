/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:44:45 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/14 14:04:45 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ch;
	size_t	i;

	i = 0;
	ch = malloc(sizeof(char) * (len + 1));
	if (ch == NULL || s == NULL)
		return (NULL);
	while (s[start] && len > 0)
	{
		ch[i] = s[start];
		i++;
		start++;
		len--;
	}
	ch[i] = '\0';
	return (ch);
}
