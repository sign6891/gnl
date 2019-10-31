/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 10:18:53 by jleyshre          #+#    #+#             */
/*   Updated: 2019/10/14 12:13:19 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include "./libft/libft.h"
# include <fcntl.h>

# define BUFF_SIZE (5)
# define MAX_FD 4096

int		get_next_line(const int fd, char **line);

#endif
