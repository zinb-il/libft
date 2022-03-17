/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:35:21 by ziloughm          #+#    #+#             */
/*   Updated: 2021/12/08 12:55:54 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	n;
	long int	m;
	int			i;
	char		*s;

	n = 0;
	i = 0;
	m = 1;
	s = (char *)str;
	while (s[i] == '\n' || s[i] == ' ' || s[i] == '\v' || s[i] == '\f'
		|| s[i] == '\r' || s[i] == '\t')
		i++;
	if (s[i] == '-')
			m = m * -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= 48 && s[i] <= 57)
	{
		n = (int) n * 10;
		n = n + s[i] - 48;
		i++;
	}
	return (n * m);
}
