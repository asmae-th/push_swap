/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:32:04 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/30 13:06:52 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// myt_stack *create_t_stack(int data)
// {
// 	t_stack *s;
// 	s = (t_stack *)malloc(sizeof(t_stack));
// 	s->data = capacity;
// 	s->next= NULL;
// 	return (s);
// }
// int isEmpty(t_stack *s)
// {
// 	if (s == NULL)
// 		return (1);
// 	else
// 		return (0);
// }
t_stack	*push(t_stack *s, int v)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
	{
		ft_free(s);
		return (NULL);
	}
	new->data = v;
	new->next = s;
	s = new;
	return (s);
}

int	ft_check_is_sort1(t_stack *a)
{
	while (a->next != NULL)
	{
		if (a->data > a->next->data)
		{
			return (0);
			break ;
		}
		a = a->next;
	}
	return (1);
}

int	size(t_stack **s)
{
	int		i;
	t_stack	*help;

	help = *s;
	i = 0;
	while (help != NULL)
	{
		i++;
		help = help->next;
	}
	return (i);
}

int	ft_size_tab(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i] != NULL)
	{
		i++;
	}
	return (i);
}

void	ft_exit(void)
{
	write (2, "Error\n", 6);
	exit (1);
}
