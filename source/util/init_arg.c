/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:40:29 by grial             #+#    #+#             */
/*   Updated: 2024/09/04 16:51:19 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

char	**init_arg(int argc, char **argv)
{
	char	*tmp;
	char	**args;

	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		tmp = args_to_array(argc, argv);
		args = ft_split(tmp, ' ');
		free(tmp);
		tmp = NULL;
	}
	if (args == NULL)
	{
		ft_printf("Error\n");
		return (0);
	}
	if (!only_digits(args))
	{
		ft_printf("Error\n");
		ft_free_array(args);
		args = NULL;
	}
	return (args);
}

char	*args_to_array(int argc, char **argv)
{
	int		i;
	char	*tmp;
	char	*str;

	str = NULL;
	str = ft_strdup("");
	i = 1;
	while (i < argc)
	{
		if (argv[i] == NULL)
		{
			ft_printf("Error\n");
			return (NULL);
		}
		tmp = str;
		str = ft_strjoin(tmp, argv[i]);
		free(tmp);
		tmp = str;
		str = ft_strjoin(tmp, " ");
		free(tmp);
		i++;
	}
	tmp = NULL;
	return (str);
}

int	only_digits(char **a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (a[i])
	{
		if (a[i][0] == '0' && a[i][1] > 0)
			return (0);
		j = 0;
		if ((a[i][j] == '-' || a[i][j] == '+') && (ft_isdigit(a[i][j + 1])))
			j++;
		while (a[i][j])
		{
			if (!ft_isdigit(a[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
