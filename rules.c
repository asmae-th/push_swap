/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:25:03 by atahtouh          #+#    #+#             */
/*   Updated: 2024/03/21 10:40:38 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(mystack *s, int size)
{
	Node *new;
	int tmp;

	if (size < 2)
		return;
	else
	{
		new = s->top;
		tmp = new->data;
		new->data = new->next->data;
		new->next->data = tmp;
	}
}

void sb(mystack *s, int size)
{
	Node *new;
	int tmp;

	if (size < 2)
		return;
	else
	{
		new = s->top;
		tmp = new->data;
		new->data = new->next->data;
		new->next->data = tmp;
	}
}
void ss(mystack *s1, mystack *s2, int size1, int size2)
{
	Node *new;
	int tmp;

	if (size1 < 2 || size2 < 2)
		return;
	else
	{
		new = s1->top;
		tmp = new->data;
		new->data = new->next->data;
		new->next->data = tmp;

		new = s2->top;
		tmp = new->data;
		new->data = new->next->data;
		new->next->data = tmp;
	}
}

void pa(mystack *a, mystack *b)
{
	Node *newtop;
	
	if(isEmpty(b))
		return;
	else
	{
		newtop = b->top;
		b->top--;
		newtop->next = a->top;
		a->top = newtop;
	}
}

void ra(mystack *s)
{
	Node *newnode;
	
	newnode = s->top;
	//s->top++;
	while (newnode != NULL)
	{
		newnode = newnode->next;
	}
	// newnode = s->top;
	 //s->top = newnode;
}