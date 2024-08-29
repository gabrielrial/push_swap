/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grial <grial@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:19:24 by grial             #+#    #+#             */
/*   Updated: 2024/07/11 21:41:26 by grial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc_gnl(size_t nmemb, size_t size)
{
	size_t	i;
	void	*mem;
	size_t	index;

	index = 0;
	if (size > 0 && (nmemb > (4294967295 / size)))
		return (0);
	if (size == 0 && nmemb == 0)
	{
		mem = (char *)malloc(sizeof(char *) * index);
		return (mem);
	}
	i = (size * nmemb);
	mem = malloc(i);
	if (mem == NULL)
		return (NULL);
	while (i > 0)
	{
		((char *)mem)[index] = 0;
		i--;
		index++;
	}
	return (mem);
}

char	*ft_substr_gnl(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen_gnl(s))
		start = ft_strlen_gnl(s);
	if (len > ft_strlen_gnl(s) - start)
		len = ft_strlen_gnl(s) - start;
	d = (char *)malloc((len + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		d[i] = s[start + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

size_t	ft_strcpy_gnl(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

char	*ft_strjoin_gnl(char const *s1, char const *s2)
{
	char	*d;
	size_t	i;
	size_t	size;

	size = ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1;
	d = (char *)malloc(size);
	if (d == NULL)
		return (NULL);
	i = ft_strcpy_gnl(d, s1);
	ft_strcpy_gnl(d + i, s2);
	return (d);
}

char	*ft_strdup_gnl(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen_gnl(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
