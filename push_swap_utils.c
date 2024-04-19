/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:32:04 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/18 15:16:36 by atahtouh         ###   ########.fr       */
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
	new->data = v;
	new->next = s;
	s = new;
	return (s);
}

t_stack	*pop(t_stack *s)
{
	return ((s->next--));
}

int	size(t_stack **s)
{
	int	i;
	t_stack *help;
	
	help = *s;
	i = 0;
	while (help != NULL)
	{
		i++;
		help = help->next;
	}
	return (i);
}
