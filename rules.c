/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:25:03 by atahtouh          #+#    #+#             */
/*   Updated: 2024/03/31 01:58:40 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_stack(stack *s)
{
	int  tmp;
	tmp = s->data;
	s->data = s->next->data;
	s->next->data = tmp;
}

void swap_same_time(stack *s1, stack *s2)
{
	swap_stack(s1);
	swap_stack(s2);
}
void push_stack(stack **s1,stack **s2)
{
	stack *tmp;
	tmp = *s1;
	*s1 = (*s1)->next;
	tmp->next = *s2;
	*s2 = tmp;
}

void rotate_stack(stack **s1)
{
	stack *tmp;
	stack *h;
	
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
void rotate_same_time(stack *s1,stack *s2)
{
	rotate_stack(&s1);
	rotate_stack(&s2);
}