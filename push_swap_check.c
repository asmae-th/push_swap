/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:53:06 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/28 10:24:34 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		tmp = ft_strjoin1(tmp, " ");
		tmp = ft_strjoin1(tmp, v[i]);
		i++;
	}
	return (tmp);
}

int	ft_check_sort(t_stack *a)
{
	t_stack	*h;

	h = a;
	while (h->next != NULL)
	{
		if (h->data > h->next->data)
			h = h->next;
		else
			return (1);
	}
	return (0);
}

int	check_spce(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 48 && s[i] <= 57)
			return (0);
		i++;
	}
	return (1);
}

int	ft_dup(t_stack **a, int nb)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp != NULL)
	{
		if (tmp->data == nb)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
