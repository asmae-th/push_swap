/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:32:24 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/26 20:32:27 by atahtouh         ###   ########.fr       */
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

void	ft_sort_five(t_stack **a, t_stack **b)
{
	while (size(a) > 3)
	{
		if ((*a)->data == plus_petit(*a))
			pb(a, b);
		else
			ra(a, 0);
	}
	ft_sort_three(a);
	pa(b, a);
	pa(b, a);
}
