/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:32:04 by atahtouh          #+#    #+#             */
/*   Updated: 2024/03/21 08:59:29 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


mystack *create_stack(unsigned int capacity)
{
	mystack *s;
	s = (mystack *)malloc(sizeof(mystack));
	s->size = capacity;
	s->top = NULL;
	return (s);
}
int isEmpty(mystack *s)
{
	if (s->top == NULL)
		return (1);
	else
		return (0);
}
void push(mystack *s, int v)
{
	Node *newnode;
	newnode = (Node*)malloc(sizeof(Node));
	newnode->data = v;
	newnode->next = s->top;
	s->top = newnode;
	s->size++;
}

int pop(mystack *s)
{

	s->top = s->top->next;
	return(s->size--);

	
	//return (s->stack[s->top--]);
}
// int size(mystack s)
// {
// 	return s.top == s.size;
// }