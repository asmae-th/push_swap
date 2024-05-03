/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:58:25 by atahtouh          #+#    #+#             */
/*   Updated: 2024/05/01 10:07:59 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen1(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (-1);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strdup1(char *s)
{
	char	*ptr;
	int		i;

	if (!s)
		return (NULL);
	ptr = (char *)malloc((ft_strlen1(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin1(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*ptr;
	int		all;

	i = 0;
	j = 0;
	if (!s1)
		s1 = ft_strdup1("");
	all = ft_strlen1(s1) + ft_strlen1(s2);
	ptr = (char *)malloc((all + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr [i] = '\0';
	free (s1);
	return (ptr);
}

long long	ft_atoi(char *str)
{
	int			i;
	long long	reslt;
	int			sing;
	int			tmp;

	sing = 1;
	reslt = 0;
	i = 0;
	tmp = 0;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sing = -sing;
		i++;
		tmp++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
		reslt = reslt * 10 + str[i++] - '0';
	if (str[i] != '\0' || (tmp == ft_strlen1(str)))
		ft_exit();
	return (reslt * sing);
}
