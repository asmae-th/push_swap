/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:54:48 by atahtouh          #+#    #+#             */
/*   Updated: 2024/03/31 01:58:49 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
	int data;
	struct stack *next;
}stack;

stack *push(stack *s, int v);
stack *pop(stack *s);
int size(stack *s);


void swap_stack(stack *s);
void swap_same_time(stack *s1, stack *s2);
void push_stack(stack **s1,stack **s2);
void rotate_stack(stack **s1);
void rotate_same_time(stack *s1,stack *s2);
#endif