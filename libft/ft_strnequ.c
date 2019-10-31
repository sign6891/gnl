/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:05:35 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/18 12:09:21 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i] == s2[i] && i < n)
		{
			if ((s1[i] == '\0' && s2[i] == '\0') || n == (i + 1))
				return (1);
			i++;
		}
		if (s1[i] != s2[i])
			return (0);
		else
			return (1);
	}
	return (1);
}
