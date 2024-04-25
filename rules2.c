/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:49:29 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/25 19:40:36 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **s1, int n)
{
	t_stack	*tmp;
	t_stack	*h;

	if (*s1 == NULL || (*s1)->next == NULL)
		return ;
	tmp = *s1;
	*s1 = (*s1)->next;
	tmp->next = NULL;
	h = *s1;
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = tmp;
	if (n == 0)
		write(1, "ra\n", 3);
}

void	rb(t_stack **s1, int n)
{
	t_stack	*tmp;
	t_stack	*h;

	if (*s1 == NULL || (*s1)->next == NULL)
		return ;
	tmp = *s1;
	*s1 = (*s1)->next;
	tmp->next = NULL;
	h = *s1;
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = tmp;
	if (n == 0)
		write(1, "rb\n", 3);
}

void	rr(t_stack **s1, t_stack **s2, int n)
{
	ra(s1, n);
	rb(s2, n);
	if (n == 1)
		write(1, "rr\n", 3);
}
