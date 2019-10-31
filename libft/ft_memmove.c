/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:17:11 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/14 13:27:15 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (s > d)
	{
		while (len--)
			*d++ = *s++;
	}
	if (s < d)
	{
		s += len;
		d += len;
		while (len--)
		{
			d--;
			s--;
			*d = *s;
		}
	}
	return (void *)(dst);
}
