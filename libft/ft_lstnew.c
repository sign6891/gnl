/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:42:05 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/21 13:48:11 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*newelement;

	if (!(newelement = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(newelement->content = malloc(content_size)))
		{
			free(newelement);
			return (NULL);
		}
		if (newelement->content == NULL)
			return (NULL);
		newelement->content_size = content_size;
		ft_memcpy(newelement->content, content, content_size);
	}
	else
	{
		newelement->content = NULL;
		newelement->content_size = 0;
	}
	newelement->next = NULL;
	return (newelement);
}
