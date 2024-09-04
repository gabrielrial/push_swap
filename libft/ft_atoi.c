/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:11:41 by grial             #+#    #+#             */
/*   Updated: 2024/09/04 02:15:25 by grial            ###   ########.fr       */
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
	// Skip leading whitespaces
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;

	// Check for sign
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sig = -1;
		nptr++;
	}

	// Convert characters to integer
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + (*nptr - '0');
		a = a * 10 + (*nptr - '0');
		if (num * sig > INT_MAX)
			return (INT_MAX);
		else if (num * sig < INT_MIN)
			return (INT_MIN);
		nptr++;
	}

	return (a * sig);
}