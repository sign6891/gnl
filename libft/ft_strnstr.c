/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:17:11 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/13 15:52:20 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		a;
	size_t	b;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len > 0)
	{
		if (haystack[i] == needle[0])
		{
			a = 1;
			b = len;
			while (needle[a] != '\0' && haystack[i + a] == needle[a] && b-- > 1)
				a++;
			if (needle[a] == '\0')
				return ((char *)&haystack[i]);
		}
		len--;
		i++;
	}
	return (0);
}
