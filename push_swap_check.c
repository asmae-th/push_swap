/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:53:06 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/02 01:09:18 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int check_num(char)
int	ft_check_arg(int c, char **v)
{
	int	i;
	int	j;

	i = 1;
	while (i < c)
	{
		j = 0;
		while (v[i][j])
		{
			if ((v[i][j] >= 48 && v[i][j] <= 57) || v[i][j] == ' '
				|| v[i][j] == '\t' || v[i][j] == '-' || v[i][j] == '+')
				j++;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

char	*arg_join(int c, char **v)
{
	int		i;
	char	*tmp;

	tmp = NULL;
	i = 1;
	while (i < c)
	{
		tmp = ft_strjoin(tmp, " ");
		tmp = ft_strjoin(tmp, v[i]);
		i++;
	}
	return (tmp);
}
