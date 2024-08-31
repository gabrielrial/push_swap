/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:40:29 by grial             #+#    #+#             */
/*   Updated: 2024/08/31 16:12:45 by grial            ###   ########.fr       */
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

int	only_digits(char **args)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			if (!ft_isdigit(args[i][j]) && args[i][j] != '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
