/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:19:53 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/27 12:30:39 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char			*ch;
	int				index;
	long long int	i;

	i = n;
	index = ft_nbrlen(i);
	if (!(ch = ft_strnew(index)))
		return (NULL);
	if (i < 0)
	{
		ch[0] = '-';
		i *= -1;
	}
	while (i > 9)
	{
		ch[index - 1] = i % 10 + '0';
		i = i / 10;
		index--;
	}
	ch[--index] = i + '0';
	return (ch);
}
