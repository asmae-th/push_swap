/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:32:04 by atahtouh          #+#    #+#             */
/*   Updated: 2024/03/31 01:15:32 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// mystack *create_stack(int data)
// {
// 	stack *s;
// 	s = (stack *)malloc(sizeof(stack));
// 	s->data = capacity;
// 	s->next= NULL;
// 	return (s);
// }
// int isEmpty(stack *s)
// {
// 	if (s == NULL)
// 		return (1);
// 	else
// 		return (0);
// }
stack *push(stack *s, int v)
{
	stack *new;
	new = (stack*)malloc(sizeof(stack));
	new->data = v;
	new->next = s;
	s = new;
	return(s);
}

stack *pop(stack *s)
{
	return ((s->next--));
}

int size(stack *s)
{
	int i;
	i = 0;
	while (s != NULL)
	{
		i++;
		s = s->next;
	}
	return (i);
}
