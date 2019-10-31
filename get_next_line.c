/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 10:18:49 by jleyshre          #+#    #+#             */
/*   Updated: 2019/10/09 20:52:53 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t		ft_len_back_n(char *str)
{
	size_t			i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

static char			*ft_read_line(const int fd, char *sav)
{
	char			bufer[BUFF_SIZE + 1];
	int				ret;
	char			*tmp;

	ret = 0;
	while ((ret = read(fd, bufer, BUFF_SIZE)) > 0)
	{
		bufer[ret] = '\0';
		if (sav == NULL)
			sav = ft_strdup(bufer);
		else
		{
			tmp = ft_strjoin(sav, bufer);
			ft_strdel(&sav);
			sav = tmp;
		}
		if (ft_strchr(sav, '\n') != NULL)
			break ;
	}
	if (ret == -1)
		sav = NULL;
	return (sav);
}

int					get_next_line(const int fd, char **line)
{
	static char		*tab[MAX_FD];
	char			*sav;
	char			*tmp;

	if (fd < 0 || fd > (MAX_FD - 1) || line == NULL || BUFF_SIZE < 1)
		return (-1);
	sav = tab[fd];
	sav = ft_read_line(fd, sav);
	if (!sav)
		return (-1);
	if (ft_strchr(sav, '\n') != NULL)
	{
		*line = ft_strsub(sav, 0, ft_len_back_n(sav));
		tmp = ft_strdup((ft_strchr(sav, '\n') + 1));
		ft_strdel(&sav);
		tab[fd] = tmp;
		return (1);
	}
	if (*sav != '\0')
	{
		*line = sav;
		tab[fd] = ft_strnew(0);
		return (1);
	}
	return (0);
}
