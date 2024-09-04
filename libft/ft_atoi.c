/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:11:41 by grial             #+#    #+#             */
/*   Updated: 2024/09/04 16:52:43 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"
#include <limits.h> // Include limits.h to use INT_MAX and INT_MIN

int	ft_atoi(const char *nptr)
{
	int			a;
	long long	num;
	int			sig;

	a = 0;
	sig = 1;
	num = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sig = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + (*nptr - '0');
		a = a * 10 + (*nptr - '0');
		if (num * sig > INT_MAX || num * sig < INT_MIN)
			return (0);
		nptr++;
	}
	return (a * sig);
}
