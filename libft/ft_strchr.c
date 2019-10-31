/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:27:37 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/13 15:49:08 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		count;
	char	*ptr;
	char	ch;

	count = 0;
	ptr = (char *)s;
	ch = (char)c;
	i = 0;
	while (ptr[i])
		i++;
	if (ch == '\0')
		return (ptr + i);
	while (ptr[count])
	{
		if (ptr[count] == ch)
			return (ptr + count);
		count++;
	}
	return (0);
}
