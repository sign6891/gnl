/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:52:24 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/18 13:26:18 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	n = i;
	if (size != 0)
	{
		while (src[j] != '\0' && i < (size - 1))
		{
			dst[i] = src[j];
			j++;
			i++;
		}
		dst[i] = '\0';
	}
	while (src[j])
		j++;
	if (n < size)
		return (n + j);
	else
		return (j + size);
}
