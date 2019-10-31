/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:51:45 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/17 12:49:05 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		ch[i] = f(i, s[i]);
		i++;
	}
	return (ch);
}
