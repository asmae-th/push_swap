/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:25:03 by atahtouh          #+#    #+#             */
/*   Updated: 2024/04/21 23:04:00 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_stack *s)
{
	int	tmp;

	tmp = s->data;
	s->data = s->next->data;
	s->next->data = tmp;
	printf("pa");
}

void	swap_same_time(t_stack *s1, t_stack *s2)
{
	swap_stack(s1);
	swap_stack(s2);
}

void	push_stack(t_stack **s1, t_stack **s2)
{
	t_stack	*tmp;

	tmp = *s1;
	*s1 = (*s1)->next;
	tmp->next = *s2;
	*s2 = tmp;
}

void	rotate_stack(t_stack **s1)
{
	t_stack	*tmp;
	t_stack	*h;

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

void	rotate_same_time(t_stack **s1, t_stack **s2)
{
	rotate_stack(s1);
	rotate_stack(s2);
}

// void	rotate_invers_stack(t_stack **s1)
// {
// 	t_stack	*tmp;
// 	t_stack	*h;

// 	tmp = *s1;
// 	while ((*s1)->next != NULL)
// 	{
// 		h = *s1;
// 		*s1 = (*s1)->next;
// 	}
// 	//printf("%d \n ",(*s1)->data);
// 	(*s1)->next = tmp;
// 	h->next = NULL;
	
// 	//*s1 = tmp;
// // 	while (*s1 != NULL)
// // 	{
// // 		printf(" valeur = %d \n",(*s1)->data);

// // 		*s1 = (*s1)->next;
// // 	}
// }



void rotate_invers_stack(t_stack **s1)
{
	t_stack *tmp;
	t_stack *h;
	tmp = *s1;
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	h = tmp->next;
	tmp->next = NULL;
	h->next = *s1;
	*s1 = h;
}

// t_list *tmp;
// t_list *hold;

// if (*stack_a == NULL || (*stack_a)->next == NULL)
// return ;
// tmp = (*stack_a);
// while (tmp->next->next)
// tmp = tmp->next;
// hold = tmp->next;
// tmp->next = NULL;
// hold->next = *stack_a;
// (*stack_a) = hold;