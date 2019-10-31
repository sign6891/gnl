/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:17:18 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/11 16:24:24 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int a;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			a = 1;
			while (needle[a] != '\0' && haystack[i + a] == needle[a])
				a++;
			if (needle[a] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
