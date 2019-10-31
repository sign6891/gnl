/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:55:17 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/16 11:07:58 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ch;
	size_t	i;
	size_t	col;
	size_t	a;

	a = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	col = ft_strlen(s);
	while (s[i] != '\0' && (s[i] == '\t' || s[i] == '\n' || s[i] == ' '))
		i++;
	if (i == col || *s == '\0')
		return (ch = ft_strnew(1));
	while (s[col - 1] == '\t' || s[col - 1] == '\n' || s[col - 1] == ' ')
		col--;
	if (!(ch = ft_strnew(col - i)))
		return (NULL);
	while (i < col)
		ch[a++] = s[i++];
	return (ch);
}
