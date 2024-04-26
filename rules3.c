/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:49:38 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/26 09:57:26 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **s1, int n)
{
	t_stack	*tmp;
	t_stack	*h;

	if (*s1 == NULL || (*s1)->next == NULL)
		return ;
	tmp = *s1;
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	h = tmp->next;
	tmp->next = NULL;
	h->next = *s1;
	*s1 = h;
	if (n == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **s1, int n)
{
	t_stack	*tmp;
	t_stack	*h;

	if (*s1 == NULL || (*s1)->next == NULL)
		return ;
	tmp = *s1;
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	h = tmp->next;
	tmp->next = NULL;
	h->next = *s1;
	*s1 = h;
	if (n == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **s1, t_stack **s2, int n)
{
	rra(s1, n);
	rrb(s2, n);
	if (n == 1)
		write(1, "rrr\n", 4);
}
