/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:32:24 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/30 10:59:56 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	plus_petit(t_stack *a)
{
	t_stack	*h;
	int		tmp;

	tmp = (a)->data;
	h = (a)->next;
	while (h != NULL)
	{
		if (h->data < tmp)
			tmp = h->data;
		a = h;
		h = h->next;
	}
	return (tmp);
}

void	ft_sort_too(t_stack *a)
{
	if (a->data > a->next->data)
		sa(a, 0);
}

void	ft_sort_three(t_stack **a)
{
	if (((*a)->next->data < (*a)->data)
		&& ((*a)->data < (*a)->next->next->data))
		sa(*a, 0);
	if (((*a)->data > (*a)->next->data)
		&& ((*a)->next->data > (*a)->next->next->data))
	{
		sa(*a, 0);
		rra(a, 0);
	}
	if (((*a)->next->data < (*a)->next->next->data)
		&& ((*a)->next->next->data < (*a)->data))
		ra(a, 0);
	if (((*a)->data < (*a)->next->next->data)
		&& ((*a)->next->next->data < (*a)->next->data))
	{
		sa(*a, 0);
		ra(a, 0);
	}
	if (((*a)->data < (*a)->next->data)
		&& ((*a)->next->next->data < (*a)->data))
		rra(a, 0);
}

void	ft_sort_4(t_stack **a, t_stack **b)
{
	while (size(a) > 3)
	{
		if ((*a)->data == plus_petit(*a))
			pb(a, b, 0);
		else
			ra(a, 0);
	}
	ft_sort_three(a);
	pa(b, a, 0);
}

void	ft_sort_five(t_stack **a, t_stack **b)
{
	int	i_min;
	int	min;

	while (size(a) > 3)
	{
		min = plus_petit(*a);
		i_min = ft_cherche_i_max(a, min);
		if (i_min <= 2)
		{
			if ((*a)->data == min)
				pb(a, b, 0);
			else
				ra(a, 0);
		}
		else
		{
			if ((*a)->data == min)
				pb(a, b, 0);
			else
				rra(a, 0);
		}
	}
	ft_sort_three(a);
	pa(b, a, 0);
	pa(b, a, 0);
}
