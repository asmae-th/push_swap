/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 23:06:08 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/25 21:36:23 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *s, int n)
{
	int	tmp;

	if (s == NULL || s->next == NULL)
		return ;
	tmp = s->data;
	s->data = s->next->data;
	s->next->data = tmp;
	if (n == 0)
		write (1, "sa\n", 3);
}

void	sb(t_stack *s, int n)
{
	int	tmp;

	if (s == NULL || s->next == NULL)
		return ;
	tmp = s->data;
	s->data = s->next->data;
	s->next->data = tmp;
	if (n == 0)
		write(1, "sb\n", 3);
}

void	ss(t_stack *s1, t_stack *s2, int n)
{
	sa(s1, n);
	sb(s2, n);
	if (n == 1)
		write(1, "ss\n", 3);
}

void	pa(t_stack **s1, t_stack **s2)
{
	t_stack	*tmp;

	if (*s1 == NULL)
		return ;
	tmp = *s1;
	*s1 = (*s1)->next;
	tmp->next = *s2;
	*s2 = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_stack **s1, t_stack **s2)
{
	t_stack	*tmp;

	if (*s1 == NULL)
		return ;
	tmp = *s1;
	*s1 = (*s1)->next;
	tmp->next = *s2;
	*s2 = tmp;
	write(1, "pb\n", 3);
}
