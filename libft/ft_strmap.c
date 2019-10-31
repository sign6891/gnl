/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:37:40 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/17 12:49:10 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*ch;

	if (s == NULL)
		return (NULL);
	ch = ft_strnew(ft_strlen(s));
	if (ch == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ch[i] = f(s[i]);
		i++;
	}
	return (ch);
}
