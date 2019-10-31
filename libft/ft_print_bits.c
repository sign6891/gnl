/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:10:58 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/27 12:30:23 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_print_bits(unsigned char octet)
{
	unsigned char	s;
	int				i;

	i = 7;
	while (i >= 0)
	{
		s = 1;
		s = s << i;
		if ((octet & s) == 0)
			ft_putchar('0');
		else
			ft_putchar('1');
		i--;
	}
}
