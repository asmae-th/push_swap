/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 01:16:52 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/02 01:19:34 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memcpy(void *dst, void *src, int n)
{
	unsigned char		*pd;
	const unsigned char	*ps;
	int					i;

	if (!dst && !src)
		return (NULL);
	pd = dst;
	ps = src;
	i = 0;
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return (dst);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

static int	ft_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
			j++;
		while (s[j] && s[j] == c)
			j++;
		i++;
	}
	return (i);
}

static int	ft_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char	*s, char c)
{
	char	**ptr;
	int		len;
	int		j;

	if (!s)
		return (0);
	len = ft_count(s, c);
	ptr = (char **)malloc((len + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	j = 0;
	while (*s && j < len)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			ptr[j] = ft_substr(s, 0, ft_len(s, c));
			j++;
		}
		while (*s && *s != c)
			s++;
	}
	ptr[j] = NULL;
	return (ptr);
}
