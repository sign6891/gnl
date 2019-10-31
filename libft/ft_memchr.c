/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:28:26 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/18 13:14:46 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*a;
	size_t			i;

	ch = (unsigned char)c;
	a = (unsigned char *)s;
	i = 0;
	while (n-- > 0)
	{
		if (a[i] == ch)
			return (void *)(a + i);
		i++;
	}
	return (NULL);
}
