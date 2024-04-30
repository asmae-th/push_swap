/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:26:42 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/30 11:01:32 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	plus_grand(t_stack *a)
{
	t_stack	*h;
	int		tmp;

	tmp = (a)->data;
	h = (a)->next;
	while (h != NULL)
	{
		if (h->data > tmp)
			tmp = h->data;
		a = h;
		h = h->next;
	}
	return (tmp);
}

int	ft_cherche_i_max(t_stack **b, int v)
{
	t_stack	*tmp;
	int		i;

	tmp = *b;
	i = 0;
	while (tmp != NULL)
	{
		if (tmp->data == v)
			break ;
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	ft_push_b_to_a(t_stack **a, t_stack **b, int size)
{
	int	max;
	int	mil;
	int	i_max;

	while (size > 0)
	{
		max = plus_grand(*b);
		i_max = ft_cherche_i_max(b, max);
		while (i_max != 0)
		{
			mil = size / 2;
			max = plus_grand(*b);
			i_max = ft_cherche_i_max(b, max);
			if (i_max <= mil && i_max > 0)
				rb(b, 0);
			if (i_max > mil)
				rrb(b, 1);
		}
		pa(b, a, 0);
		size--;
	}
}

void	ft_sort_500(t_stack **a, t_stack **b, int size)
{
	int	*tab;
	int	i_tab;
	int	count;

	count = 0;
	tab = ft_copy(a);
	if (!tab)
	{
		free(tab);
		return ;
	}
	ft_sort_tab(tab, size);
	while (count < size)
	{
		i_tab = cherche_i_tab(tab, (*a)->data, size);
		count = move_500(i_tab, count, a, b);
	}
	ft_push_b_to_a(a, b, size);
}

int	move_500(int i_tab, int count, t_stack **a, t_stack **b)
{
	if (i_tab < count)
	{
		pb(a, b, 0);
		rb(b, 0);
		count++;
	}
	else if (i_tab <= count + 35)
	{
		pb(a, b, 0);
		count++;
	}
	else
		ra(a, 0);
	return (count);
}
