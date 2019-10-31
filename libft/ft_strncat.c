/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:56:30 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/10 15:30:05 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t count)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str1[i])
		i++;
	while (str2[j] && count > 0)
	{
		str1[i] = str2[j];
		i++;
		j++;
		count--;
	}
	str1[i] = '\0';
	return (str1);
}
