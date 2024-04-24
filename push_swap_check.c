/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmae <asmae@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:53:06 by atahtouh          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/23 09:36:49 by atahtouh         ###   ########.fr       */
=======
/*   Updated: 2024/04/22 19:20:49 by asmae            ###   ########.fr       */
>>>>>>> 7e79611e388556f6472f811e42940cd0198fb352
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


int ft_check_sort(t_stack *a)
{
	t_stack *h;
	h = a;
	while(h->next != NULL)
	{
		if (h->data > h->next->data)
			h = h->next;
		else
			return (1);
	}
	return (0);
}

int check_spce(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if(s[i] >= 48 && s[i] <= 57)
			return (0);
		i++;
	}
	return (1);
}

int ft_dup(t_stack **a, int nb)
{
	t_stack *tmp;
	tmp = *a;

	while (tmp != NULL)
	{
		if(tmp->data == nb)
			return(1);
		tmp = tmp->next;
	}
    return 0;
}

int ft_size_tab(char **ptr)
{
	int i;
	
	i = 0;
	while (ptr[i] != NULL)
	{
		i++;
	}
	return (i);
}
