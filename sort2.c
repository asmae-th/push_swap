/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:26:42 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/25 20:03:21 by atahtouh         ###   ########.fr       */
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
		mil = size / 2;
		while (i_max != 0)
		{
			max = plus_grand(*b);
			i_max = ft_cherche_i_max(b, max);
			if (i_max <= mil && i_max > 0)
				rb(b, 0);
			else if (i_max > mil && i_max > 0)
				rrb(b, 1);
		}
		pb(b, a);
		size--;
	}
}
