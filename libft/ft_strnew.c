/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:57:40 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/21 13:18:40 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ch;
	char	*p;

	if (size < SIZE_MAX)
	{
		ch = (char *)malloc((size + 1) * sizeof(char));
		if (ch == NULL)
			return (NULL);
		p = ch;
		while (size)
		{
			*p++ = '\0';
			size--;
		}
		*p = '\0';
		return (ch);
	}
	return (NULL);
}
