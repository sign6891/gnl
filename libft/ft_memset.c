/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:13:38 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/17 12:38:25 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	unsigned char	ch;
	size_t			i;

	i = 0;
	a = (unsigned char *)b;
	ch = (unsigned char)c;
	while (i < len)
	{
		a[i] = ch;
		i++;
	}
	return (b);
}
