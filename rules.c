/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:25:03 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/03 03:55:42 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_stack *s)
{
	int	tmp;

	tmp = s->data;
	s->data = s->next->data;
	s->next->data = tmp;
}

void	swap_same_time(t_stack *s1, t_stack *s2)
{
	swap_stack(s1);
	swap_stack(s2);
}

void	push_stack(t_stack **s1, t_stack **s2)
{
	t_stack	*tmp;

	tmp = *s1;
	*s1 = (*s1)->next;
	tmp->next = *s2;
	*s2 = tmp;
}

void	rotate_stack(t_stack **s1)
{
	t_stack	*tmp;
	t_stack	*h;

	tmp = *s1;
	*s1 = (*s1)->next;
	tmp->next = NULL;
	h = *s1;
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = tmp;
}

void	rotate_same_time(t_stack **s1, t_stack **s2)
{
	rotate_stack(s1);
	rotate_stack(s2);
}




void	rotate_invers_stack(t_stack **s1)
{
	t_stack	*tmp;
	t_stack	*h;

	tmp = *s1;
	while ((*s1)->next != NULL)
	{
		h = *s1;
		*s1 = (*s1)->next;
	}
	(*s1)->next = tmp;
	h->next = NULL;
	while (*s1 != NULL)
	{
		printf(" valeur = %d \n",(*s1)->data);

		*s1 = (*s1)->next;
	}
}