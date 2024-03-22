/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:54:48 by atahtouh          #+#    #+#             */
/*   Updated: 2024/03/21 10:40:44 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include<stdio.h>
#include<stdlib.h>

// typedef struct
// {
//    int sommet;
//    int size;
//    int *stack;
// }mystack;

typedef struct Node
{
   int data;
   struct Node *next;
}Node;

typedef struct mystack
{
   Node *top;
   int size;
}mystack;



int isEmpty(mystack *s);
void push(mystack *s, int v);
int pop(mystack *s);
int size(mystack s);
mystack *create_stack(unsigned int capacity);


void sa(mystack *s, int size);
void sb(mystack *s, int size);
void ss(mystack *s1, mystack *s2, int size1, int size2);
void pa(mystack *a, mystack *b);
void ra(mystack *s);
#endif