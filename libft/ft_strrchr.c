/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:53:39 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/13 15:51:59 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;
	char	*ptr;

	ptr = (char *)s;
	ch = (char)c;
	i = 0;
	while (ptr[i])
		i++;
	if (ch == '\0')
		return (ptr + i);
	while (i >= 0)
	{
		if (ptr[i] == ch)
			return (ptr + i);
		i--;
	}
	return (0);
}
