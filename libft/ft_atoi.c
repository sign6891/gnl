/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleyshre <jleyshre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:58:11 by jleyshre          #+#    #+#             */
/*   Updated: 2019/09/27 11:24:22 by jleyshre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_atoi(const char *str)
{
	int					ans;
	int					sign;
	unsigned long long	body;

	ans = 0;
	sign = 1;
	body = 0;
	while (ft_skip(*str) == 1)
		str++;
	if (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? -1 : 1;
	while (ft_isdigit(*str) > 0)
	{
		if (sign == 1 && (body > __LONG_LONG_MAX__ / 10 || body * 10
		> (unsigned long long)__LONG_LONG_MAX__
								- (unsigned long long)(*str - '0')))
			return (-1);
		if (sign == -1 && (body > __LONG_LONG_MAX__ / 10 || body * 10
		> (unsigned long long)__LONG_LONG_MAX__ + 1
								- (unsigned long long)(*str - '0')))
			return (0);
		body = body * 10 + *str - '0';
		ans = ans * 10 + sign * (int)(*str++ - '0');
	}
	return (ans);
}
